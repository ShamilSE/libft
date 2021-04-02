/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:38:22 by mismene           #+#    #+#             */
/*   Updated: 2020/12/11 14:37:09 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*s;
	unsigned char		*d;
	unsigned char		*last_d;
	const unsigned char	*last_s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (NULL);
	if (d < s)
		ft_memcpy(dst, src, len);
	else
	{
		last_d = &d[len - 1];
		last_s = &s[len - 1];
		while (len--)
			*last_d-- = *last_s--;
	}
	return (dst);
}
