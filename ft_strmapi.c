/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:39:32 by mismene           #+#    #+#             */
/*   Updated: 2020/12/08 08:56:16 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	string_size;
	char	*exit_string;
	int		i;

	i = 0;
	if (!s)
		return (0);
	string_size = ft_strlen(s);
	if (!(exit_string = malloc(string_size + 1)))
		return (NULL);
	ft_bzero(exit_string, string_size);
	while (s[i])
	{
		exit_string[i] = f(i, s[i]);
		i++;
	}
	exit_string[i] = '\0';
	return (exit_string);
}
