/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:39:06 by ivillanu          #+#    #+#             */
/*   Updated: 2024/05/27 15:47:00 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_alist **a)
{
	t_alist	*last;
	t_alist	*blast;

	last = ft_alstlast(*a);
	blast = ft_alstbeforelast(*a);
	blast->next = NULL;
	last->next = *a;
	*a = last;
}

void	rra(t_alist **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_alist **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_alist **a, t_alist **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}