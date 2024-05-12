/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:28:31 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:32:54 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)	// ta funkacja sprawdza czy dany charakter jest cyfra
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	x;
// 	x = '4';

//     // Sprawdzenie czy znak jest litera
//     if (ft_isdigit(x)) {
//         printf("%c jest cyfra.\n", x);
//     } else {
//         printf("%c nie jest cyfra.\n", x);
//     }

//     return (0);
// }