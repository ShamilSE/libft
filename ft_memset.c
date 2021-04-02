/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:38:25 by mismene           #+#    #+#             */
/*   Updated: 2020/12/04 21:12:59 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** fill b using c bu len size
*/

void	*ft_memset(void *b, int c, size_t len)
{
	char *p;

	p = b;
	while (len--)
		*(char *)p++ = c;
	return (b);
}
