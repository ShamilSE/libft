/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:39:16 by mismene           #+#    #+#             */
/*   Updated: 2020/12/25 11:21:49 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copyes size symbols from src to dst. returns count of copyed chars
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*d;
	char	*s;

	i = 0;
	j = 0;
	d = dst;
	s = (char *)src;
	while (d[i] && i < size)
		i++;
	while (s[j] && size > i + j + 1)
	{
		d[i + j] = s[j];
		j++;
	}
	if (i < size)
		d[j + i] = '\0';
	return (ft_strlen(src) + i);
}
