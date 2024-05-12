/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:50:03 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 17:15:12 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iteruje przez każdy znak w łańcuchu s i stosuje funkcję f do każdego znaku,
// przekazując indeks znaku oraz wskaźnik do tego znaku.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	x = 0;
	while (s[x] != '\0')
	{
		f(x, s + x);
		x++;
	}
}

// void transform(unsigned int index, char *c) {
//     if (*c >= 'a' && *c <= 'z')
// 	{
//         *c = *c - 32;
//     }
// }

// int main() {
//     char s[] = "hello wOrld!";

//     ft_striteri(s, transform);
//     printf("Przekształcony łańcuch: %s\n", s); // "HELLO WORLD"
//     return (0);
// }