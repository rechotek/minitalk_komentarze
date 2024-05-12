/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:09:02 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:32:47 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int x)	// ta funkacja sprawdza czy dany charakter jest litera
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	x;
// 	x = '1';

//     // Sprawdzenie czy znak jest litera
//     if (ft_isalpha(x)) {
//         printf("%c jest literą alfabetu.\n", x);
//     } else {
//         printf("%c nie jest literą alfabetu.\n", x);
//     }

//     return (0);
// }