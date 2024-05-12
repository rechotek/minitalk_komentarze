/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:17:05 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/10 09:31:45 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Służy do wypełniania obszaru pamięci, na który wskazuje wskaźnik b, określoną
// wartością bajtu c, przez określoną liczbę bajtów len. Przydatne w wielu
// operacjach na pamięci, jak czyszczenie itp. Przekonwertowanie wskaźnika b na
// wskaźnik typu char. Konieczne, ponieważ memset operuje na bajtach, a nie na
// typach ogólnych (to do p=(char *)b)

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

// int main( void )
// {
//    char buffer[] = "This is a test of the memset function.";

//    printf( "Before: %s\n", buffer);
//    ft_memset(buffer, 'f', 4);
//    printf( "After:  %s\n", buffer);
// }