/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:18:24 by ivillanu          #+#    #+#             */
/*   Updated: 2023/12/01 08:08:45 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	x;

	if (argc)
	{
		x = 1;
		while (argv[x] != '\0')
		{
			ft_print(argv[x]);
			x++;
		}
		return (0);
	}
}
