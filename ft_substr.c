/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:40:03 by mismene           #+#    #+#             */
/*   Updated: 2020/12/06 22:22:24 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*st;

	if (s == NULL || (len + 1 == 0))
		return (NULL);
	if ((str = (char*)malloc(len + 1)) == NULL)
		return (NULL);
	while (*s && start--)
		s++;
	st = str;
	while (len-- && *s)
		*str++ = *s++;
	*str = '\0';
	return (st);
}
