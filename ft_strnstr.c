/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:39:47 by mismene           #+#    #+#             */
/*   Updated: 2020/12/04 20:54:10 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** find the first including needle in haystach and return it
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	char	*exit;

	i = 0;
	j = 0;
	exit = (char *)haystack;
	while (haystack[i] && i < len)
	{
		if (needle[j] == '\0')
			return (exit + i - j);
		if (haystack[i] == needle[j])
			++j;
		else
		{
			i -= j;
			j = 0;
		}
		++i;
	}
	if (needle[j] == '\0')
		return (exit + i - j);
	return (NULL);
}
