/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:10:49 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/30 11:58:25 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc)
	{
		while (*argv[0])
			write (1, argv[0]++, 1);
		write (1, "\n", 1);
	}
	return (0);
}
