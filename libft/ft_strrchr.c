/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:01:33 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/10 13:50:39 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funkcja strrchr jest używana do wyszukania ostatniego wystąpienia znaku w
// ciągu str. Jeśli zostanie znaleziony, program wyświetla jego pozycję (indeks)
// w ciągu. Jeśli nie zostanie znaleziony, program wyświetla odpowiedni
// komunikat. Jest to odwrotnosc strchr.

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	while (x >= 0)
	{
		if (str[x] == (char)c)
			return ((char *)str + x);
		x--;
	}
	if ((char)c == '\0')
		return ((char *)str + x);
	return (0);
}

// int main(void)
// {
//     const char str[] = "Hello, world!";
//     int c = 'o';
//     char *result;

//     result = ft_strrchr(str, c);
//     if (result != NULL)
//     {
//         printf("Znaleziono znak '%c' na pozycji: %ld\n", c, result - str);
//     }
//     else
//     {
//         printf("Nie znaleziono znaku '%c' w ciągu.\n", c);
//     }

//     return 0;
// }