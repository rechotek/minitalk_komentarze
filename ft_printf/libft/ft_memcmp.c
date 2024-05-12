/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:57:10 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:33:05 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Porównuje pierwsze n bajtów w obu obszarach pamięci, na które wskazują
// s1 i s2. Porównuje ona zawartość każdego bajtu z obu obszarów pamięci.Funkcja
// zwraca wartość całkowitą, która ma następujące znaczenie:

// Jeśli oba obszary pamięci są identyczne, funkcja zwraca 0.
// Jeśli pierwszy znaleziony różniący się bajt w s1 jest mniejszy niż w s2,
// funkcja zwraca wartość mniejszą niż 0.
// Jeśli pierwszy znaleziony różniący się bajt w s1 jest większy niż w s2,
// funkcja zwraca wartość większą niż 0.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	x;

	str1 = (char *)s1;
	str2 = (char *)s2;
	x = 0;
	while (x < n)
	{
		if (str1[x] != str2[x])
			return ((unsigned char)str1[x] - (unsigned char)str2[x]);
		x++;
	}
	return (0);
}

// int main(void)
// {
//     const char s1[] = "abqd";
//     const char s2[] = "abgd";
//     size_t n = 5;

// 	printf("Wynik to: %d\n", ft_memcmp(s1, s2, n));
//     return 0;
// }