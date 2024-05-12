/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:00:28 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/09 09:32:28 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	n;
	int	m;

	x = 0;
	n = 0;
	m = 1;
	while (str[x] == ' ' || str[x] == '\f' || str[x] == '\n' || str[x] == '\r'
		|| str[x] == '\t' || str[x] == '\v')
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			m = m * -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		n = (n * 10) + (str[x] - '0');
		x++;
	}
	n = n * m;
	return (n);
}

// int	main(void)
// {
// 	char	str[] = " 	\r\t\n \n   +1234ab567";
// 	printf("Jest: %d\n", ft_atoi(str));
// 	return (0);
// }