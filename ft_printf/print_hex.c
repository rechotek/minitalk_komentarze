/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:23:31 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/21 15:53:35 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"
// #include "print_string.c"
// #include "print_char.c"

static char	*create_hex(unsigned int value, int *xptr)
{
	int				x;
	unsigned int	tempvalue;
	char			*str;

	x = 0;
	tempvalue = value;
	while (tempvalue != 0)
	{
		tempvalue = tempvalue / 16;
		x++;
	}
	str = ft_calloc(x + 1, sizeof(char));
	*xptr = x - 1;
	return (str);
}

static char	hex_digit(unsigned int digit, int asc)
{
	if (digit < 10)
		return (digit + 48);
	else
		return (digit + asc);
}

int	print_hex(unsigned int value, int asc)
{
	unsigned int	tempvalue;
	char			*printout;
	int				x;
	int				*xptr;

	xptr = &x;
	tempvalue = value;
	printout = create_hex(value, xptr);
	if (printout == NULL)
		return (0);
	while (tempvalue != 0 && x >= 0)
	{
		printout[x] = hex_digit(tempvalue % 16, asc);
		tempvalue /= 16;
		x--;
	}
	x = ft_strlen(printout);
	ft_putstr_fd(printout, 1);
	free(printout);
	if (value == 0)
		x += print_char('0');
	return (x);
}

// int	main(void)
// {
//     unsigned int	value = 45516;
//     int				asc = 87;

// 	printf(" Dlugosc: %d", print_hex(value, asc));
//     return (0);
// }