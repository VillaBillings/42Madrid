/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:58:31 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/20 16:54:36 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putstr(int *tab, int size)
{
	int	x;
	char c; 

	x = 0;
	while (x < size){
		c = tab[x] + '0';
		write (1, &c, 1);
		x++;
	}
	write (1, "  ", 2);
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	c;
	int	i;

	x = 0;
	i = 1;
	while (x < size - 1)
	{
		x = 0;
		while (i < size)
		{
			if (tab[size - i] < tab[size - i - 1])
			{
				c = tab[size - i];
				tab[size - i] = tab[size - i - 1];
				tab[size - i - 1] = c;
			}
			else
				x++;
			i++;
		}
		i = 1;
	}
}
/*int main (void)
{
	int *tab;
	int size = 5;
	int array[5] = {1, 6 , 4, 9, 5};
	tab = array;
	ft_putstr(tab, size);
	ft_sort_int_tab(tab, size);

	return (0);
}*/
