/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:02:25 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:32:57 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int x)	//sprawdzenie czy znak jest printable
{
	if (x >= ' ' && x <= '~')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	x;
// 	x = 'v';

// 	// Sprawdzenie czy znak jest printable
// 	if (ft_isprint(x)) {
// 		printf("%c jest printable.\n", x);
// 	} else {
// 		printf("%c nie jest printable.\n", x);
// 	}
// 	return (0);
// }