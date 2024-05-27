/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:17:28 by ivillanu          #+#    #+#             */
/*   Updated: 2024/05/27 14:49:08 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_alist **a)
{
	t_alist	*save;

    save = (*a)->next;
    (*a)->next = (*a)->next->next;
    save->next = *a;
    *a = save;
}

void	sa(t_alist **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_alist **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_alist **a, t_alist **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
