/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:41:54 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/10 16:31:53 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Służy do wyodrębnienia fragmentu łańcucha znaków (podciągu) z danego łańcucha
// Ta funkcja jest często wykorzystywana w programowaniu do manipulacji
// łańcuchami znaków.
// s - wskaźnik do łańcucha znaków, z którego będziemy wyodrębniać podciąg.
// start - indeks początkowy, od którego zaczyna się wyodrębnianie podciągu.
// len - długość wyodrębnianego podciągu.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	y;
	char	*str;

	x = 0;
	y = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	while (s[x] != '\0')
	{
		if (x >= start && y < len)
		{
			str[y] = s[x];
			y++;
		}
		x++;
	}
	str[y] = '\0';
	return (str);
}

// int main() {
//     const char *src = "Hello, world!";
//     unsigned int start = 7;
//     size_t len = 5;

//     char *str = ft_substr(src, start, len);

//     if (str == NULL) {
//         printf("Błąd alokacji pamięci!\n");
//         return (1);
//     }

//     printf("Wyodrębniony podciąg: %s\n", str);
//     free(str);
//     return (0);
// }