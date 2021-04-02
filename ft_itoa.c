/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:37:42 by mismene           #+#    #+#             */
/*   Updated: 2020/12/25 15:34:36 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_size(int num)
{
	int counter;

	counter = 0;
	while (num /= 10)
		counter++;
	return (++counter);
}

char		*ft_itoa(int n)
{
	int		sign;
	char	*number;

	sign = n < 0 ? 1 : 0;
	if (n == 0)
	{
		number = (char *)malloc(2);
		number[0] = '0';
		number[1] = '\0';
		return (number);
	}
	if (!(number = malloc(count_size(n) + 1 + sign)))
		return (NULL);
	if (sign)
		*number++ = '-';
	number += count_size(n);
	*number-- = '\0';
	while (n)
	{
		*number-- = (n % 10) * (sign ? -1 : 1) + '0';
		n /= 10;
	}
	return (number + 1 - sign);
}
