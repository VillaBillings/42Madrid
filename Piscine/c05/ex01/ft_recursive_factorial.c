/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:42:28 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/30 18:50:50 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	n = n * nb;
	return (n);
}

/*int main(void)
{
	int nb = 4;
	ft_recursive_factorial(nb);
}*/