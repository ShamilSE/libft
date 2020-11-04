/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mismene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:57:33 by mismene           #+#    #+#             */
/*   Updated: 2020/10/30 11:57:40 by mismene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;

	while (*lst)
	{
		p = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = p;
	}
	*lst = NULL;
}
