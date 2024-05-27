/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:18:44 by ivillanu          #+#    #+#             */
/*   Updated: 2024/05/27 15:42:42 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_alist	*ft_alstnew(int numb)
{
	t_alist	*node;

	node = malloc(sizeof(t_alist));
	if (!node)
		return (0);
	node->nb = numb;
	node->next = NULL;
	return (node);
}

t_alist	*ft_alstlast(t_alist *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

t_alist	*ft_alstbeforelast(t_alist *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
