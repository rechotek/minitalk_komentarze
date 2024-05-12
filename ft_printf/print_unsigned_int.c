/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:45:46 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/21 17:05:15 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

static void	printout(unsigned int nb)
{
	if (nb > 9)
		print_unsigned_int(nb / 10);
	if (nb <= 9)
	{
		ft_putchar_fd(nb + 48, 1);
		return ;
	}
	ft_putchar_fd((nb % 10) + 48, 1);
}

int	print_unsigned_int(unsigned int nb)
{
	unsigned int	x;

	printout(nb);
	x = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		x++;
	}
	return (x);
}

// int main(void)
// {
//     unsigned int	nb1 = 543523456;
// 	unsigned int	nb2 = 236;
// 	unsigned int	nb3 = 6;
//     printf(" Dlugosc: %d", print_unsigned_int(nb1));
// 	printf(" Dlugosc: %d", print_unsigned_int(nb2));
// 	printf(" Dlugosc: %d", print_unsigned_int(nb3));
//     return (0);
// }