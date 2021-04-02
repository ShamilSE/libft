/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:38:07 by mismene           #+#    #+#             */
/*   Updated: 2020/12/04 22:20:23 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** find first c in s and return pointer to it
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char *)s;
	while (n--)
		if (*p++ == (unsigned char)c)
			return ((void *)--p);
	return (NULL);
}
