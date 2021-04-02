/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:38:17 by mismene           #+#    #+#             */
/*   Updated: 2020/12/04 22:19:37 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copyes src to dst by n size
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *p;

	p = dst;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (p);
}
