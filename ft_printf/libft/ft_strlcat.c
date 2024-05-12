/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:42:32 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:33:52 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Zadaniem funkcji strlcat jest dołączenie napisu src do napisu dest, przy
// czym ogranicza się długość wynikowego napisu do size - 1 znaków (aby zachować
// miejsce na znak null na końcu). Funkcja zawsze kończy wynikowy napis znakiem
// null, nawet jeśli osiągnie limit długości. Funkcja strlcat zwraca długość
// wynikowego napisu (tj. długość, jaką miałby napis dest po dołączeniu src,
// gdyby nie było ograniczenia size).

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (dest[x] && x < size)
		x++;
	while (src[y] && (x + y + 1) < size)
	{
		dest[x + y] = src[y];
		y++;
	}
	if (x < size)
		dest[x + y] = '\0';
	y = 0;
	while (src[y])
		y++;
	return (x + y);
}

// int main(void)
// {
//     char src[] = "world!";
//     char dest[20] = "Hello, ";
//     size_t result;

// 	printf("Before strlcat: %s\n", dest);
//     result = ft_strlcat(dest, src, sizeof(dest));
//     printf("After srtlcat: %s\n", dest);
//     printf("Resulting string length: %zu\n", result);

//     return 0;
// }