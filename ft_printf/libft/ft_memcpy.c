/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:16:58 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:33:28 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Kopiuje obszar pamieci

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	x;
	char	*d;
	char	*s;

	x = 0;
	d = (char *)dest;
	s = (char *)src;
	while (n > x)
	{
		d[x] = s[x];
		x++;
	}
	return (dest);
}
//d[x] = '\0' (nie powinnismy dodac zakonczenia ciagu?)

// int main(void)
// {
//    char dest[20];
//    char src[] = "Hello world!";

//    ft_memcpy(dest, src, 8); //przy 8 cos dziwnego sie dzieje
//    printf("Skopiowany tekst:  %s\n", dest);
// }