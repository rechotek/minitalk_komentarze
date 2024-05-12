/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:15:25 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/10 09:32:29 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Przeszukuje pierwsze len znaków w ciągu big w poszukiwaniu wystąpienia
// ciągu little. Jeśli ciąg little zostanie znaleziony, funkcja zwraca wskaźnik
// na jego pierwsze wystąpienie w ciągu big. W przeciwnym razie zwraca wartość
// NULL. Jesli little jest puste to zwraca wskaznik na big.

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (little == NULL || little[0] == '\0')
		return ((char *)big);
	while (big[x] != '\0' && x < len)
	{
		if (big[x] == little[y])
		{
			while (big[x + y] == little[y] && x + y < len)
			{
				if (little[y + 1] == '\0')
					return ((char *)big + x);
				y++;
			}
			y = 0;
		}
		x++;
	}
	return (0);
}

// int main() {
//     const char big[] = "Hello, world!";
//     const char little[] = "rl";
//     size_t len = 15;
//     char *result;

//     result = ft_strnstr(big, little, len);

//     if (result != NULL) {
//         printf("Znaleziono '%s' w ciągu '%s' na pozycji: %ld\n", little,
// 		big, result - big);
//     } else {
//         printf("Nie znaleziono '%s' w ciągu '%s'.\n", little, big);
//     }

//     return 0;
// }