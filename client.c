/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:44:21 by mrechuli          #+#    #+#             */
/*   Updated: 2024/05/17 15:47:13 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void send_sig(pid_t pid, char c)
{
	int bit;

	bit = 0; // bit to indeks bajta, kazde miejsce w bajcie to bit
	while (bit <= 7) // iteruje od 0 do 7 bo mamy 8 bitow w bajcie
	{
		if (1 & (c >> bit)) // c >> bit - sprawdza czy na danym bicie w znaku c jest 1; np. c = 10010001, bit = 0, czyli przeskakuje o 0 bitow w prawo i sprawdzam czy jest tam 1, potem zwiekszam bit++ i w kolejnym wywolaniu robie 1 ruch w prawo i sprawdzam czy jest tam 1, nie ma wiec wykonuje else
			kill(pid, SIGUSR1); // SIGUSR1 - wysyla 1
		else
			kill(pid, SIGUSR2); // SIGUSR2 - wysyla 0
		usleep(100); // zanim wysle kolejny bit, program ma zatrzymac sie (uspic) na 100 mikrosekund, aby sygnaly sie na siebie nie nakladaly
		bit++;
	}
}

int main (int argc, char *argv[])
{
	pid_t	pid; // pid to jest identyfikator procesu
	int		x;

	x = 0;
	if (argc != 3) // jesli nie wprowadzam 2 argumentow (PID i string) to jest to blad
	{
		ft_printf("Error: Invaid format.\nCorrect: %s <pid> <string>\n", argv[0]);
		return (1);
	}
	pid = ft_atoi(argv[1]); // robie atoi na wypadek gdyby PID wprowadzono nie w postaci liczby, ale stringa
	if (kill(pid, 0) == -1) // sprawdzam czy wprowadzony PID jest poprawny. Funkcja kill(pid, 0) nie wysyla zadnego sygnalu, ale sprawdza czy podany proces istnieje i czy mamy do niego dostep. Jesli PID jest niepoprawny to funkcja zwroci -1. I wlasnie wtedy wyskoczy ERROR PID.
	{
		ft_printf("Error: Invalid PID\n");
		return (1);
	}
	while (argv[2][x])
	{
		send_sig(pid, argv[2][x]);
		x++;
	}
	send_sig(pid, '\n');
	return (0);
}