/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:57:33 by mismene           #+#    #+#             */
/*   Updated: 2020/10/30 11:57:40 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// return string with allocated memory
char	*ft_strdup(const char *s1)
{
	char *str;
	char *p;

	str = malloc(ft_strlen(s1) + 1);
	p = str;
	if (str == NULL)
		return (NULL);
	while (*s1)
		*p++ = *s1++;
	*p = '\0';
	return (str);
}
