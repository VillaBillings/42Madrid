/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:29:55 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/15 21:01:39 by ivillanu         ###   ########.fr       */
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
void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	c;

	x = 0;
	while (x + 1 <= size / 2)
	{
		c = tab[x];
		tab[x] = tab[size - x -1];
		tab[size - x -1] = c;
		x++;
	}
}
/*int main (void)
{
	int *tab;
	int size = 6;
	int array[6] = {1, 2, 3, 4, 5, 6};
	tab = array;
	ft_putstr(tab, size);
	ft_rev_int_tab(tab, size);

	return (0);
}*/
