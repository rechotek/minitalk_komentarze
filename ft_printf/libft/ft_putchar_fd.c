/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:00:31 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 15:10:20 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Wypisuje pojedynczy znak c na określony deskryptor pliku fd (np. konsola)

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	char	c = 'G';
// 	int		fd = STDOUT_FILENO;

// 	ft_putchar_fd(c, fd);
// 	return (0);
// }