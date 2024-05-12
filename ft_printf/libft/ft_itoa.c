/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:20:49 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 14:59:11 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  Służy do konwersji liczby całkowitej na odpowiadający jej łańcuch znaków.
//  Oznacza to, że zamienia liczbę całkowitą na jej reprezentację jako ciąg
//  znaków. Czyli zamieni 45 na 45, ale bedzie to ciag znakow. -125 na -125 itd.

#include "libft.h"

static char	*ft_char(char *s, unsigned int num, long int len)
{
	while (num > 0)
	{
		s[len] = 48 + (num % 10);
		num = num / 10;
		len--;
	}
	return (s);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char				*s;
	long int			len;
	unsigned int		num;
	int					sign;

	sign = 1;
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	len--;
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		num = n * -1;
		s[0] = '-';
	}
	else
		num = n;
	s = ft_char(s, num, len);
	return (s);
}

// int	main(void)
// {
// 	int	n = -12345;

// 	char *str = ft_itoa(n);

// 	printf("Liczba: %d\n", n);
// 	printf("Reprezentacja lancuchowa (po wykonaniu itoa): %s\n", str);
// 	free(str);
// 	return (0);
// }