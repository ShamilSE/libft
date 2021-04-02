/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:36:41 by mismene           #+#    #+#             */
/*   Updated: 2020/12/11 14:40:14 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** counts how many words in a row
*/

static size_t	how_many_words(char const *s, char c)
{
	size_t	count;
	char	was_sep;

	count = 0;
	was_sep = 1;
	while (*s)
	{
		if (*s != c && was_sep)
		{
			was_sep = 0;
			++count;
		}
		else if (*s == c)
			was_sep = 1;
		++s;
	}
	return (count);
}

/*
** figure out where to separate, return len of word
*/

static size_t	to_terminate(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		++s;
		++len;
	}
	return (len);
}

/*
** allocates memory for each word and return it to record it to matrix
*/

static char		*record_word(char const *s, size_t len)
{
	char	*str;

	if ((str = (char*)malloc(len + 1)) == NULL)
		return (NULL);
	ft_memcpy(str, s, len);
	str[len] = '\0';
	return (str);
}

/*
** clean matrix
*/

static char		**matrix_clean(char **matrix, int length)
{
	int	i;

	i = 0;
	while (i < length)
		free(matrix[i++]);
	free(matrix);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	words;
	int		i;
	size_t	length;

	if (s == NULL)
		return (NULL);
	words = how_many_words(s, c);
	if (!(matrix = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		length = to_terminate(s, c);
		if (length != 0)
		{
			if (!(matrix[i++] = record_word(s, length)))
				return (matrix_clean(matrix, i - 1));
			s += length;
		}
		else
			++s;
	}
	matrix[i] = NULL;
	return (matrix);
}
