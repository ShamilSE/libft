/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:39:57 by mismene           #+#    #+#             */
/*   Updated: 2020/12/04 20:53:22 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	if_s_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	int		i;
	int		start;
	int		end;

	start = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && if_s_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && if_s_in_set(s1[end - 1], set))
		end--;
	if (!(string = malloc(sizeof(*s1) * (end - start + 1))))
		return (NULL);
	i = 0;
	while (start < end)
		string[i++] = s1[start++];
	string[i] = 0;
	return (string);
}
