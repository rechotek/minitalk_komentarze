/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:09:19 by mrechuli          #+#    #+#             */
/*   Updated: 2024/03/11 17:42:39 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Sluzy do podziału łańcucha znaków na części, które są oddzielone określonym
// separatorem lub znakiem. Zwraca tablicę wskaźników na podzielone słowa.
// Każdy element tej tablicy wskaźników wskazuje na początek jednego z
// podzielonych słów. Ostatni element tablicy to wskaźnik NULL,co oznacza koniec
// tablicy.

#include "libft.h"
//#include "ft_substr.c"

static void	*ft_free(char **result, size_t position)
{
	while (position != 0)
	{
		free(result[position]);
		position--;
	}
	free(result[position]);
	free(result);
	return (NULL);
}

static void	ft_word(char const *s, size_t *first, size_t *last, char c)
{
	*first = *last;
	while (s[*first] == c)
		*first = *first + 1;
	*last = *first;
	while (s[*last] != c && s[*last] != '\0')
		*last = *last + 1;
}

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;
	size_t	first;
	size_t	last;

	count = 0;
	first = 0;
	last = 0;
	while (s[last] != '\0')
	{
		ft_word(s, &first, &last, c);
		if (last == first)
			break ;
		else
			count++;
	}
	return (count);
}

static char	*ft_fill(char const *s, size_t first, size_t last)
{
	char	*word;
	size_t	position;

	position = 0;
	word = malloc(sizeof(char) * (last - first) + 1);
	if (word == NULL)
		return (NULL);
	word[last - first] = 0;
	while (first < last)
	{
		word[position] = s[first];
		position++;
		first++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	first;
	size_t	last;
	size_t	position;

	result = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (result == NULL)
		return (NULL);
	result[ft_countwords(s, c)] = 0;
	last = 0;
	first = 0;
	position = 0;
	while (position < ft_countwords(s, c))
	{
		ft_word(s, &first, &last, c);
		if (last == first)
			break ;
		result[position] = ft_fill(s, first, last);
		if (result[position] == NULL)
			return (ft_free(result, position));
		position++;
	}
	return (result);
}

// int main(void)
// {
//     char const *text = "To jest przykładowy tekst do podziału.";
//     char **parts = ft_split(text, 'o');

//     if (parts == NULL)
// 	{
//         printf("Błąd alokacji pamięci!\n");
//         return (1);
//     }

// 	char **tmp = parts;

//    while (*tmp)
//    {
//         printf("%s\n", *tmp);
//         free(*tmp);
//         tmp++;
//     }
//     free(parts); // Zwolnienie pamięci dla tablicy wskaźników
//     return (0);
// }
