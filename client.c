/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:44:21 by mrechuli          #+#    #+#             */
/*   Updated: 2024/05/12 19:00:21 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void send_sig(pid_t pid, char c)
{
	int bit;

	bit = 0; // x to indeks bajta, kazde miejsce w bajcie to bit
	while (bit <= 7) // iteruje od 0 do 7 bo mamy 8 bit ow w bajcie
	{
		if (c & (1 >> bit)) // 1 >> bit - sprawdza czy na danym bicie w znaku c jest 1; np. c = 10010001, bit = 0, czyli przeskakuje o 0 bitow w prawo i sprawdzam czy jest tam 1, potem zwiekszam bit++ i w kolejnym wywolaniu robie 1 ruch w prawo i sprawdzam czy jest tam 1, nie ma wiec wykonuje else
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

int main (int argc, char *argv[])
{
	pid_t	pid; // pid to jest identyfikator procesu
	char	*str;

	if (argc != 3) // jesli nie wprowadzam 2 argumentow (PID i string) to jest to blad
	{
		ft_printf("Usage: %s <pid> <string>\n", argv[0]);
		return (1);
	}
	pid = ft_atoi(argv[1]); // robie atoi na wypadek gdyby PID wprowadzono nie w postaci liczby, ale stringa
	str = argv[2];
	while (*str)
	{
		send_sig(pid, *str);
		str++;
	}
	send_sig(pid, '\n');
	return (0);
}