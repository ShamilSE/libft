/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:57:33 by mismene           #+#    #+#             */
/*   Updated: 2020/10/30 11:57:40 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;
	int		j;

	p = malloc(len + 1);
	i = start;
	j = 0;
	if (p == NULL || !s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		*p = '\0';
		return (p);
	}
	while (len-- && s[i])
		p[j++] = s[i++];
	p[j] = '\0';
	return (p);
}
