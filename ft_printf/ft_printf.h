/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:04:52 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/21 16:14:02 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *str, ...);
int	print_pointer(unsigned long value, int asc);
int	print_string(char *s);
int	print_int(int n);
int	print_char(char c);
int	print_hex(unsigned int value, int asc);
int	print_unsigned_int(unsigned int nb);

#endif