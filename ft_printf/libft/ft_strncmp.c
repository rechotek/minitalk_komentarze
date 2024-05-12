/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:41:26 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:34:02 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funkcja porównuje dwa łańcuchy s1 i s2, oraz zwraca liczbę będącą opisem
// zależności między nimi czyly wynik odejmowania dwoch roznych znakow
// (roznica z ASCII)

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (n == 0)
		return (0);
	while ((x < n) && (s1[x] || s2[x]))
	{
		if (s1[x] != s2[x])
			return (((unsigned char)s1[x] - (unsigned char)s2[x]));
		x++;
	}
	return (0);
}

// int main(void)
// {
// 	char	s1[] = "abed";
// 	char	s2[] = "abgd";
// 	unsigned int	n;
// 	n = 4;

// 	printf("Wynik to: %d\n", ft_strncmp(s1, s2, n));
// 	return(0);
// }