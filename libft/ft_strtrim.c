/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:42:39 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/10 09:32:35 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Usuwa wszystkie znaki z początku i końca łańcucha  s1, które występują w
// zbiorze znaków set. Ostatecznie zwraca nowy łańcuch, który jest kopią
// oryginalnego łańcucha s1 z usuniętymi znakami ze zbioru set na jego
// końcach.
// s1: Łańcuch znaków, który chcemy przyciąć.
// set: Łańcuch znaków reprezentujący zestaw znaków, które chcemy usunąć z
// początku i końca łańcucha s1.

#include "libft.h"
// #include "ft_strlcpy.c"
// #include "ft_strchr.c"
// #include "ft_strlen.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	y;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		x = 0;
		y = ft_strlen(s1);
		while (s1[x] != '\0' && ft_strchr(set, s1[x]))
			x++;
		while (s1[y - 1] != '\0' && ft_strchr(set, s1[y - 1]) && y > x)
			y--;
		str = (char *)malloc(sizeof(char) * (y - x + 1));
		if (str != 0)
			ft_strlcpy(str, &s1[x], y - x + 1);
	}
	return (str);
}

// int main() {
//     const char *s1 = "exxampfdsleexeeexxx";
//     const char *set = "xe";

//     char *trimmed_str = ft_strtrim(s1, set);

//     if (trimmed_str == NULL) {
//         printf("Błąd alokacji pamięci!\n");
//         return (1);
//     }
//     printf("Oryginalny łańcuch: \"%s\"\n", s1);
//     printf("Zbiór znaków do usunięcia: \"%s\"\n", set);
//     printf("Przycięty łańcuch: \"%s\"\n", trimmed_str);

//     free(trimmed_str);
//     return (0);
// }