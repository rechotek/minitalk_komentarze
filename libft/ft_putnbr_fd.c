/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:34:21 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 16:31:20 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Wypisuje liczbę całkowitą na określonym deskryptorze pliku.

#include "libft.h"
//#include "ft_putchar_fd.c"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}

// int main() {
//     int	n = 214748364;
//     int	fd = STDOUT_FILENO;

//     ft_putnbr_fd(n, fd);

//     return (0);
// }
