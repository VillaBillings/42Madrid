/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:17:27 by ivillanu          #+#    #+#             */
/*   Updated: 2024/05/27 15:59:36 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int ft_printlist(t_alist *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		printf ("nb= %i\n", lst->nb);
		lst = lst->next;
	}
	printf ("\n");
	return(count);
}

int ft_printablist(t_alist *a, t_alist *b)
{
	int	count;

	count = 0;
	while (a != NULL || b != NULL)
	{
		count++;
		printf ("%i  %i\n", a->nb, b->nb);
		a = a->next;
		b = b->next;
	}
	while (a != NULL)
	{
		count++;
		printf ("%i   \n", a->nb);
		a = a->next;
	}
	while (b != NULL)
	{
		count++;
		printf ("   %i\n", b->nb);
		b = b->next;
	}
	printf ("_  _\n");
	printf ("a  b\n");
	printf ("\n");
	return(count);
}

t_alist	*stack(char *argv[])
{
	int		x;
	t_alist	*a;
	t_alist	*new;
	t_alist	*current;

	x = 2;
	a = ft_alstnew(ft_atoi(argv[1])); // pasar a long para comprobar que no me pasan un maximo
	current = a;
	while (argv[x] != NULL)
	{
		new = ft_alstnew(ft_atoi(argv[x]));
		current->next = new;
		current = new;
		x++;
	}
	return(a);
}

t_alist *stack_falso(void)
{
    t_alist *a = ft_alstnew(6);
    t_alist *current = a;
    
    for (int i = 7; i <= 10; i++)
    {
        t_alist *new_node = ft_alstnew(i);
        current->next = new_node;
        current = new_node;
    }

    return a;
}

int	main(int argc, char *argv[])
{
	t_alist	*a;
	t_alist *b;

	if (argc)
	{
		a = stack(argv);
		b = stack_falso();
		ft_printablist(a, b);

				// SWAP
		// sa(&a);
		// ft_printablist(a, b);

		// sb(&b);
		// ft_printablist(a, b);
		
		// ss(&a, &b);
		// ft_printablist(a, b);

				// PUSH
		// pa(&a, &b);
		// ft_printablist(a, b);

		// pb(&a, &b);
		// ft_printablist(a, b);

				// ROTATE
		// ra(&a);
		// ft_printablist(a, b);

		// rb(&b);
		// ft_printablist(a, b);
		
		// rr(&a, &b);
		// ft_printablist(a, b);

				// REVERS ROTATE
		rra(&a);
		ft_printablist(a, b);

		rrb(&b);
		ft_printablist(a, b);
		
		rrr(&a, &b);
		ft_printablist(a, b);

		return (0);
	}
}