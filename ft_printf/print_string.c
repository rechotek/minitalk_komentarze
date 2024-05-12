/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:57:52 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/20 18:24:15 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	print_string(char *s)
{
	unsigned int	x;

	x = 0;
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (s[x] != '\0')
		x++;
	ft_putstr_fd(s, 1);
	return (x);
}

// int main(void)
// {
//     char str[] = "Essa^$&*7683mordo!";
//     printf("; Dlugosc stringu \"%s\": %d\n", str, print_string(str));
//     return (0);
// }

// int main(void)
// {
//     char *str = NULL;
//     printf(" NULL %d NULL", print_string(str));
//     return (0);
// }