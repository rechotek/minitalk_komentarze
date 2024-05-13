/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:18:47 by mrechuli          #+#    #+#             */
/*   Updated: 2024/05/13 19:15:59 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

// static oznacza ze zmienna global_state jest dostepna tylko w pliku w ktorym zostala zdefiniowna
// jest to funkcja globalna, poniewaz jest zdefiniowana poza funkcja, ale przez static jest dostepna tylko w tym pliku
static t_state global_state = {0,0}; // inicjalizauje globalna zmienna global_state, ktora ustawia wartosci pol struktury t_state na 0. W tym przypadku ustawia wartosc character oraz index na zero

void setup_signal_handler(void)
{
	struct sigaction sa1;
	struct sigaction sa2;

	sa1.sa_handler = sig_1; // sa_handler to wskaznik na funkcje ktora bedzie obslugiwac sygnal (jest to jedno z pol struktury sigaction), wiec ustawiam sa_handler dla sa1 na sig_1 (tam jest zapisana cala funkcja)
	sigemptyset(&sa1.sa_mask); // ustawia zbior sygnalow na pusty (czyli ze zaden sygnal nie jest w nim zawarty). Trzeba to zrobic, przed wywolaniem funkcji sigaction, aby odbierany sygnal byl czysty i nie mial zadnych dodatkowych sygnalow w zbiorze
	sa1.sa_flags = 0; // sa to dodatkowe flagi, ktore moga kontrolowac zachowanie funkcji obslugujacej sygnal; ustawienie jej na 0 oznacza, ze nie sa uzywane zadne dodatkowe flagi
	sa2.sa_handler = sig_2;
	sigemptyset(&sa2.sa_mask);
	sa2.sa_flags = 0;
	sigaction(SIGUSR1, &sa1, NULL); // SIGUSR1-numer sygnalu ktory bede obslugiwal, &sa1-adres struktury, w ktorej zapisane sa ustawienia obslugi sygnalu; NULL-wskaznik na strukture, w ktorej zapisane sa poprzednie ustawienia obslugi sygnalu (nie uzywam tego, dlatego jest NULL)
	sigaction(SIGUSR2, &sa2, NULL);
}

int main (void)
{
	pid_t	pid;

	pid = getpid(); // generuje PID dla tego procesu
	ft_printf("Your PID: %d\n", pid);
	setup_signal_handler(); // ustalam "handlery" dla konkretnych sygnalow, czyli okreslam funkcje ktore sa wywolywane w odpowiedzi na dany sygnal
	while (1) // jest to nieskonczona petla programu, ktora utrzymuje program w dzialaniu, pozwalajac mu na ciagle nasluchiwanie sygnalow
	{
	}
	return (0);
}