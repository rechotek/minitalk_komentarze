/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:08:19 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/19 16:32:52 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Służy do wypisywania łańcucha znaków *s na określony deskryptor pliku fd
// (np. konsola). 

#include "libft.h"
//#include "ft_strlen.c"

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}

// int	main(void)
// {
// 	char	*s = "Hello World!\n";
// 	int		fd = STDOUT_FILENO;

// 	ft_putstr_fd(s, fd);
// 	return (0);
// }
