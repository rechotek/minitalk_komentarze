/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:37:59 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:32:44 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)	// sprawdza czy dany charakter jest litera lub cyfra
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')
		|| (x >= '0' && x <= '9'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	x;
// 	x = ' ';

//     // Sprawdzenie czy znak jest litera
//     if (ft_isalnum(x)) {
//         printf("%c jest alfanumeryczny.\n", x);
//     } else {
//         printf("%c nie jest alfanumeryczny.\n", x);
//     }

//     return (0);
// }