/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:39:06 by mismene           #+#    #+#             */
/*   Updated: 2020/12/04 21:09:52 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	char	*another_copy;
	char	*another_one_copy;
	int		copy_len;

	copy_len = ft_strlen(s1);
	if (!(copy = malloc(copy_len + 1)))
		return (NULL);
	copy[copy_len] = '\0';
	another_one_copy = copy;
	another_copy = (char *)s1;
	while (*another_copy)
		*copy++ = *another_copy++;
	return (another_one_copy);
}
