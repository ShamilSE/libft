/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:39:51 by mismene           #+#    #+#             */
/*   Updated: 2020/12/04 20:58:15 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = ft_strlen(s);
	p = (char *)s;
	while (i > -1)
	{
		if (p[i] == (char)c)
			return (&(p[i]));
		i--;
	}
	if (c == '\0')
		return (p);
	return (NULL);
}
