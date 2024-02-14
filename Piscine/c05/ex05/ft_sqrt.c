/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:31:17 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/30 17:51:00 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	left;
	int	right;
	int	mid;

	left = 1;
	right = nb;
	if (nb <= 0)
		return (0);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid < nb / mid)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}

/*include <stdio.h>
int main(void)
{
	int nb =ft_sqrt(2147483647);
	printf("%i", nb);
}*/