/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:06:55 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/10 09:32:10 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Służy do tworzenia kopii łańcucha znaków. Przyjmuje ona wskaźnik do łańcucha
// znaków jako argument i zwraca wskaźnik do nowo zaalokowanej pamięci
// zawierającej kopię tego łańcucha znaków.

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(src);
	dup = (char *)malloc(size * sizeof(char) + 1);
	if (dup == NULL)
		return (0);
	ft_memcpy(dup, src, size);
	dup[size] = '\0';
	return (dup);
}

// int	main (void)
// {
// 	char	*src = "Essa mordo!";
// 	char	*dup = ft_strdup(src);

// 	printf("Orginal: %s\n", src);
// 	printf("Duplikat: %s\n", dup);
// 	free(dup);
// 	return (0);
// }