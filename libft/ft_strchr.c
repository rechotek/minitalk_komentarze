/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:29:29 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/10 13:46:50 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funkcja strchr jest używana do wyszukania pierwszego wystąpienia znaku c w
// ciągu str. Jeśli zostanie znaleziony, program wyświetla jego pozycję (indeks)
// w ciągu. Jeśli nie zostanie znaleziony, program wyświetla odpowiedni
// komunikat.

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*str == '\0' || str == NULL)
			return (0);
		str++;
	}
	return ((char *)str);
}

// int main(void)
// {
//     const char str[] = "Hello, world!";
//     int c = 'H';
//     char *result;

//     result = ft_strchr(str, c);
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