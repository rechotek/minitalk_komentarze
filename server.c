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

// OPIS DZIALANIA NA PRZYKLADZIE
// Wezmy litere "E", ktorej reprezentacja bitowa to 01000101
// Sygnal wpada w kolejnosci od najbardziej znaczacego bita (MSB)
// Czyli najpierw wpada 0, wiec wywolywana jest funkcja sig_2. Zwieksza ona global.index o 1, ale global.character pozostaje bez zmian (ustawlem go na poczatku na {0, 0}, wiec jak chce miec zero to nie robie nic tylko przechodze o jedno miejsce do przodu w indexie)
// Potem wpada 1, wiec wywolywana jest funkcja sig_1, ktora za pomoca operatora OR ustawia wartosc danego bitu na 1 (zmieniajac 0 na 1)
// I tak do konca dopoki nie dojde do konca bajta (czyli indexu 7, zaczynajac od 0)
// Kiedy dotre do konca oznacza to ze "przepisalem" caly bajt i moge go wypisac juz jako znak.
// Jak go wypisze to ustawiam z powrotem indeks i global.character na 0

// static oznacza ze zmienna global jest dostepna tylko w pliku w ktorym zostala zdefiniowna
// jest to funkcja globalna, poniewaz jest zdefiniowana poza funkcja, ale przez static jest dostepna tylko w tym pliku
static t_state global = {0,0}; // inicjalizauje globalna zmienna global, ktora ustawia wartosci pol struktury t_state na 0. W tym przypadku ustawia wartosc character oraz index na zero

void	sig_1(int sig) // ta funkcja jest wywolywana gdy program otrzyma sygnal SIGUSR1
{
	(void)sig; // funkcja sig_1 nie uzywa argumentu sig, jednak jest wymagany przez standard jezyka, wiec aby uniknac ostrzezenia o nieuzywanej funkcji  to pisze (void)sig
	global.character |= (1 << global.index); // | jest to operator OR, jego dzialanie wytlumaczylem w WORDie. W tym kontekscie zamieni dane miejsce w indexie na 1 (bo w OR 0 i 1, 1 i 0, 1 i 1 dadza 1). W zadaniu ustawilem globalna zmienna na {0, 0}, wiec kazde wywolanie tego zmieni dane indexowe miejsce na 1 
	global.index++; 
	if (global.index == 8)
	{
		write (1, &global.character, 1);
		global.character = 0;
		global.index = 0;
	}
}

// ta funkcja jest wywolywana gdy program (serwer) otrzyma sygnal SIGUSR2
void	sig_2(int sig) // sig_2 odpowiada za 0. Jeśli wiec wpada sygnal to nie musze nic zmieniac poza iteracja indexu (bo ustawilem 0 domyslnie)
{
	(void)sig; // funkcja sig_2 nie uzywa argumentu sig, jednak jest wymagany przez standard jezyka, aby uniknac ostrzezenia o nieuzywanej pamieci to pisze (void)sig
	global.index++;
	if (global.index == 8)
	{
		write (1, &global.character, 1);
		global.character = 0;
		global.index = 0;
	}
}

void setup_signal_handler(void)
{
	struct sigaction sa1; // odnosze sie do okreslonej struktury sigaction tworzac sa1
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