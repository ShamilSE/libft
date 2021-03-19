/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:39:22 by mismene           #+#    #+#             */
/*   Updated: 2021/03/19 10:45:07 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	char	*s;
	size_t	n;
	size_t	i;

	i = 0;
	n = dstsize;
	d = dst;
	s = (char *)src;
	if (dst == NULL || src == NULL)
		return (0);
	if (n != 0)
	{
		while (src[i] && i < n)
		{
			d[i] = s[i];
			i++;
		}
		dst[i] = '\0';
	}
	printf("copied %zu chars\n", ft_strlen(dst));
	return (ft_strlen(dst));
}
