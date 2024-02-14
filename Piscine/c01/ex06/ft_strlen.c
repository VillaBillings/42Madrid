/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:23:22 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/16 12:43:04 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		x;
	char	c;

	x = 0;
	c = str[0];
	while (c != '\0')
	{
		x++;
		c = str[x];
	}
	return (x);
}

/*int main (void)
{
	char *str = "HOLA";
	ft_strlen(str);

	return (0);
}*/
