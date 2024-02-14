/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:50:39 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/30 18:55:27 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_convert(char *p, int x)
{
	int	nb;

	nb = 0;
	while (p[x] != '\0')
	{
		if (!(p[x] >= '0' && p[x] <= '9'))
			return (nb);
		nb = nb * 10;
		nb = nb + p[x] - '0';
		x++;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int	x;
	int	nb;
	int	sign;

	sign = 1;
	x = 0;
	nb = 0;
	while (str[x] != '\0')
	{
		if (str[x] == '-')
			sign = sign * -1;
		if (str[x] >= 'a' && str[x] <= 'z')
			return (nb);
		if (str[x] >= '0' && str[x] <= '9')
		{
			nb = ft_convert(str, x);
			return (sign * nb);
		}
		x++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	//int h = ft_atoi("  -1--+--+1234ab567");
	printf("%d", ft_atoi(" -+---212?11ab"));
	return 0;
}