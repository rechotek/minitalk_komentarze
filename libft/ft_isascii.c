/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:44:33 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:32:50 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int x)	//sprawdzenie czy znak jest z zakresu ASCII
{
	if (x >= 0 && x <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	x;
// 	x = '5';

// 	// Sprawdzenie czy znak jest ASCII
// 	if (ft_isascii(x)) {
// 		printf("%c jest ASCII.\n", x);
// 	} else {
// 		printf("%c nie jest ASCII.\n", x);
// 	}
// 	return (0);
// }