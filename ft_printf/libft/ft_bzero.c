/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:08:37 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/10 14:17:59 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ustawia określoną liczbę bajtów na zero, począwszy od określonego adresu w
// pamięci. Jest to często stosowana funkcja w języku C do czyszczenia buforów
// pamięci przed ich ponownym wykorzystaniem

#include "libft.h"
//#include "ft_memset.c"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}

// int main( void )
// {
//    char buffer[] = "This is a test of the bzero function.";
// 	size_t len = sizeof(buffer) - 1;

//    printf( "Before: %s\n", buffer);
//    ft_bzero(buffer, 4);
//    printf( "After:  %s\n", buffer);

//    return (0);
// }
