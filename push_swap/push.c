/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:02:38 by ivillanu          #+#    #+#             */
/*   Updated: 2024/05/27 15:00:27 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_alist **a, t_alist **b)
{
	t_alist	*save;

	if (*b == NULL)
		return;
	save = *b;
	*b= (*b)->next;
	save->next = *a;
	*a = save;
	ft_printf("pa\n");
}

void	pb(t_alist **a, t_alist **b)
{
	t_alist	*save;

	if (*a == NULL)
		return;
	save = *a;
	*a= (*a)->next;
	save->next = *b;
	*b = save;
	ft_printf("pb\n");
}
