/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:56:36 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/20 17:52:17 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	print_int(int n)
{
	int				nb;
	unsigned int	x;

	nb = n;
	x = 1;
	if (n < 0 && n != -2147483648)
	{
		nb = -n;
		x++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		x++;
	}
	ft_putnbr_fd(n, 1);
	if (n == -2147483648)
		return (11);
	return (x);
}

// int	main(void)
// {
// 	int	n = -2147483647;
// 	printf(" Dlugosc: %d", print_int(n));
// 	return (0);
// }
