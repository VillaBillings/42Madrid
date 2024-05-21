#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"

typedef struct s_list
{
	int			*nb;
	struct s_list	*next;
}	t_list;

void	push_swap(char **str);

#endif