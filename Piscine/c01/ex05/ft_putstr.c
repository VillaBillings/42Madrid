/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:42:52 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/16 12:42:31 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;
	int		x;

	x = 0;
	c = str[0];
	while (c != '\0')
	{
		write (1, &str[x], 1);
		x++;
		c = str[x];
	}
}

/*int main (void)
{
	char *str = "HOLA";
	ft_putstr(str);
}*/
