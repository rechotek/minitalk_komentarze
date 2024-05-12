/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:57:12 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/21 16:00:05 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"
// #include "print_string.c"
// #include "print_char.c"

static char	*create_hexy(unsigned long value, int *xptr)
{
	int				x;
	unsigned long	tempvalue;
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

static char	hexy_digit(unsigned long digit, int asc)
{
	if (digit < 10)
		return (digit + 48);
	else
		return (digit + asc);
}

int	print_pointer(unsigned long value, int asc)
{
	unsigned long	tempvalue;
	char			*printout;
	int				x;
	int				*xptr;

	xptr = &x;
	tempvalue = value;
	printout = create_hexy(value, xptr);
	if (printout == NULL)
		return (0);
	while (tempvalue != 0 && x >= 0)
	{
		printout[x] = hexy_digit(tempvalue % 16, asc);
		tempvalue /= 16;
		x--;
	}
	x = ft_strlen(printout);
	if (value == 0)
		x += print_string("(nil)");
	else
		x = x + print_string("0x");
	ft_putstr_fd(printout, 1);
	free(printout);
	return (x);
}

// int main() {
//     unsigned long value = 14;
//     int asc = 87;

// 	printf(" Dlugosc: %d", print_pointer(value, asc));
//     return (0);
// }