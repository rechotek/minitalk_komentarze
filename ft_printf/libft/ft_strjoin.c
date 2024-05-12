/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:19:08 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/10 09:32:17 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Służy do połączenia dwóch łańcuchów znaków w jeden.
// Funkcja przyjmuje dwa argumenty typu const char *, czyli wskaźniki do
// łańcuchów znaków, które chcemy połączyć.
// Funkcja musi najpierw obliczyć długość wynikowego łańcucha, który będzie
// zawierał zawartość obu łańcuchów. W tym celu sumuje długości obu łańcuchów.
// Następnie alokowana jest pamięć dla nowego łańcucha, który będzie mógł
// pomieścić oba łańcuchy oraz znak końca łańcucha ('\0').
// Zawartość pierwszego łańcucha jest kopiowana do nowego łańcucha,
// a następnie zawartość drugiego łańcucha jest dołączana na końcu.
// Funkcja zwraca wskaźnik do nowego łańcucha znaków, który zawiera połączone
// zawartości obu łańcuchów.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	char	*str;

	x = 0;
	y = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		str[x + y] = s2[y];
		y++;
	}
	str[x + y] = '\0';
	return (str);
}

// int main() {
//     const char *s1 = "Essa";
//     const char *s2 = " mordo!";

//     char *result = ft_strjoin(s1, s2);

//     if (result == NULL) {
//         printf("Błąd alokacji pamięci!\n");
//         return (1);
//     }

//     printf("Połączony łańcuch: %s\n", result);
//     free(result);
//     return (0);
// }