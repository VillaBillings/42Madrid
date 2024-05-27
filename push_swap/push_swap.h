#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
#include "./printf/ft_printf.h"

typedef struct s_alist
{
	int			nb;
	struct s_alist	*next;
}	t_alist;

t_alist	*ft_alstnew(int numb);
t_alist	*ft_alstlast(t_alist *lst);
t_alist	*ft_alstbeforelast(t_alist *lst);
void	sa(t_alist **a);
void	sb(t_alist **b);
void	ss(t_alist **a, t_alist **b);
void	pa(t_alist **a, t_alist **b);
void	pb(t_alist **a, t_alist **b);
void	ra(t_alist **a);
void	rb(t_alist **b);
void	rr(t_alist **a, t_alist **b);
void	rra(t_alist **a);
void	rrb(t_alist **b);
void	rrr(t_alist **a, t_alist **b);


#endif