/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:36:50 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/30 01:59:57 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (n > 1)
	{
		n--;
		nb = nb * n;
	}
	return (nb);
}

/*int main()
{
	int n = ft_iterative_factorial(4);
	n = n +'0';
	write (1, &n, 1);
}*/
