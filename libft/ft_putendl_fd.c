/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:21:56 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 15:32:58 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Służy do wypisywania łańcucha znaków na określonym deskryptorze pliku
// (np. konsoli), po czym dodaje znak nowej linii. 

#include "libft.h"
//#include "ft_strlen.c"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

// int	main (void)
// {
// 	char	*s = "Essa mordo!";
// 	int		fd = STDOUT_FILENO;

// 	ft_putendl_fd(s, fd);
// 	return (0);
// }