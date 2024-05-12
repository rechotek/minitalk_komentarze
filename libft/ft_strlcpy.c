/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:49:17 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:33:56 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Kopiuje co najwyżej n - 1 znaków z src do dest, a następnie dodaje znak
// null na końcu. Gwarantuje, że wynikowa tablica dest będzie zakończona
// znakiem null. Zawsze gwarantuje, że wynikowy napis w dest będzie zakończony
// znakiem null, co jest bardzo przydatne w celu uniknięcia błędów w manipulacji
// napisami.Zwraca długość src (tzn. ilość znaków, które zostałyby skopiowane,
// gdyby nie było ograniczenia n), co ułatwia sprawdzenie, czy doszło do
// obcięcia napisu.Zapewnia bezpieczeństwo, ponieważ zawsze dodaje znak null
// na koniec wynikowego napisu.

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (size == 0)
	{
		while (src[x] != '\0')
			x++;
		return (x);
	}
	while (x < size - 1 && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	if (x < size)
		dest[x] = '\0';
	while (src[x] != '\0')
		x++;
	return (x);
}

// int main(void)
// {
//     char src[] = "Hello, world";
//     char dest[20];
//     size_t len;

//     len = ft_strlcpy(dest, src, 55);
//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);
//     printf("Length of copied string: %zu\n", len);

//     return 0;
// }