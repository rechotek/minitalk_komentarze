/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:37:31 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:34:13 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int x)	// zmienia duza litere na mala
{
	if (x >= 'A' && x <= 'Z')
		return (x + 32);
	return (x);
}

// int	main(void)
// {
// 	char	x;
// 	x = 'D';

// 	printf("%c\n", ft_tolower(x));
// 	return (0);
// }