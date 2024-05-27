/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:07:37 by ivillanu          #+#    #+#             */
/*   Updated: 2024/05/27 15:32:07 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_alist **a)
{
	t_alist	*save;
	t_alist	*last;

    save = *a;
	*a = (*a)->next;
	save->next = NULL;
	last = ft_alstlast(*a);
	last->next = save;
}

void	ra(t_alist **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_alist **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_alist **a, t_alist **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}