/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:59:26 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/10 14:23:13 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nmemb-liczba elementow, ktore chcesz zaalokowac
// size-rozmiar kazdego elementu w bajtach
// Funkcja ta zwraca wskaźnik do obszaru pamięci o rozmiarze nmemb * size,
// zainicjowanego zerami, jeśli alokacja pamięci zakończy się powodzeniem.
// W przypadku błędu alokacji, zwraca NULL.
// Funkcja calloc() różni się od malloc() tym, że inicjalizuje zaalokowaną
// pamięć zerami, co jest przydatne w wielu przypadkach, gdy potrzebujemy
// pamięci oczyszczonej.

#include "libft.h"
//#include "ft_bzero.c"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (size > SIZE_MAX / nmemb)
	{
		return (NULL);
	}
	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}

// int main() {
//     size_t nmemb = SIZE_MAX;
//     size_t size = SIZE_MAX;

//     int *p = (int *)ft_calloc(nmemb, size);

//     if (p == NULL) {
//         printf("Błąd alokacji pamięci!\n");
//         return (1);
//     }
//     for (size_t i = 0; i < nmemb; i++) {
//         p[i] = i + 1;
//         printf("%d ", p[i]);
//     }
//     printf("\n");

//     // Zwolnienie pamięci zaalokowanej przez ft_calloc
//     free(p);
//     return (0);
// }
