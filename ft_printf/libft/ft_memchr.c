/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:29:28 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/10 09:31:35 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Przeszukuje pierwsze n bajtów obszaru pamięci, na który wskazuje str, w
// poszukiwaniu określonego bajtu c. Jeśli znajdzie ten bajt, zwraca wskaźnik
// do jego lokalizacji w pamięci. W przeciwnym razie zwraca wskaźnik NULL.

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s;
	size_t	x;

	s = (char *)str;
	x = 0;
	while (x < n)
	{
		if ((unsigned char)s[x] == (unsigned char)c)
			return ((char *)str + x);
		x++;
	}
	return (0);
}

// int main(void)
// {
//     const char str[] = "Hello, world!";
//     const char *ptr;

//     ptr = ft_memchr(str, 'o', 5);
//     if (ptr != NULL) {
//         printf("Znaleziono 'o' na pozycji: %ld\n", ptr - str);
//     } else {
//         printf("Nie znaleziono 'o'.\n");
//     }

//     return (0);
// }