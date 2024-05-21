/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:17:27 by ivillanu          #+#    #+#             */
/*   Updated: 2024/05/21 19:59:09 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

t_list	*stack(char *argv[])
{
	t_list	*a;
	t_list	*new;
	t_list	*current;
	int		x;

	x = 2;
	current = a;
	a = ft_lstnew(ft_atoi(argv[1]));
	while (argv[x] != NULL)
	{
		printf ("nb= %i", current->nb);
		new = ft_lstnew(ft_atoi(argv[x]));
		current->next = new;
		current = new;
		x++;
	}
}

int	main(int argc, char *argv[])
{
	int		x;

	if (argc)
	{
		stack(argv[]);
		return (0);
	}
}