/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:57:33 by mismene           #+#    #+#             */
/*   Updated: 2020/10/30 11:57:40 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// return pointer to first entry c to s

char	*ft_strchr(const char *s, int c)
{
	const char	*tmp;
	int			i;

	i = 0;
	tmp = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			tmp = &s[i];
			return ((char *)tmp);
		}
		++i;
	}
	if (c == '\0')
		return (&((char *)s)[i]);
	return (NULL);
}
