/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:19:17 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/30 13:14:43 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;
	int	result;

	result = 1;
	a = 2;
	if (nb == 0 || nb == 1)
		result = 0;
	while (a <= nb / 2)
	{
		if (nb % a == 0)
			result = 0;
		a++;
	}
	return (result);
}

int	ft_find_next_prime(int nb)
{
	int	pri;

	pri = 0;
	if (nb <= 0)
		return (0);
	while (pri == 0)
	{
		pri = ft_is_prime(nb);
		if (pri == 0)
			nb++;
	}
	return (nb);
}
