/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:26:20 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 16:42:43 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funkcja iteruje po każdym znaku łańcucha s i stosuje funkcję f do każdego
// znaku, aby przekształcić go na podstawie określonych kryteriów. Wynikiem jest
// nowy łańcuch znaków, który zawiera przekształcone znaki.

#include "libft.h"
//#include "ft_strlen.c"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*str;

	x = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[x] != '\0')
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}

// char	transform(unsigned int index, char c)
// {
//     if (c >= 'a' && c <= 'z')
// 	{
// 		return (c - 'a' + 'A'); // Zamiana na dużą literę
//     }
// 	else
// 	{
//         return c;
//     }
// }

// int		main(void)
// {
//     char *s = "helLo world!";
//     char *result = ft_strmapi(s, transform);
//     printf("Przekształcony łańcuch: %s\n", result);
//     free(result);
//     return (0);
// }