/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:30:16 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:34:16 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int x)	// zmienia mala litere na duza
{
	if (x >= 'a' && x <= 'z')
		return (x - 32);
	return (x);
}

// int	main(void)
// {
// 	char	x;
// 	x = 'h';

// 	printf("%c\n", ft_toupper(x));
// 	return (0);
// }