/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:40:54 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 13:08:25 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Jest używana do przesuwania danych w pamięci, przy czym źródłowy i docelowy
// obszar pamięci mogą się nakładać. Innymi słowy, funkcja memmove może
// prawidłowo działać nawet wtedy, gdy źródłowy i docelowy obszar pamięci mają
// część wspólną, co jest jednym z głównych różnic między funkcją memmove a
// funkcją memcpy.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	x;

	x = 0;
	if (src < dest)
	{
		x = n;
		while (x > 0)
		{
			x--;
			((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
		}
	}
	else
	{
		x = 0;
		while (x < n)
		{
			((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
			x++;
		}
	}
	return (dest);
}

// int main(void)
// {
//    char dest[6];
//    char src[] = "Hello world!";

//    ft_memmove(dest, src, 5); //przy 8 cos dziwnego sie dzieje
//    printf("Skopiowany tekst:  %s\n", dest);
// }