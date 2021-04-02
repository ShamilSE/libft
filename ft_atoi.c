/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:36:55 by mismene           #+#    #+#             */
/*   Updated: 2020/12/10 20:54:28 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	long	integer;
	char	sign;

	i = 0;
	while (('\t' <= str[i] && str[i] <= '\r') || str[i] == ' ')
		++i;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		++i;
	integer = 0;
	while ('0' <= str[i] && str[i] <= '9')
		integer = integer * 10 + (str[i++] - '0');
	return (integer * sign);
}
