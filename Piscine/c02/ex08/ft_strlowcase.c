/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:43:25 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/22 16:42:49 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		x;
	int		alf;
	char	c;

	x = 0;
	alf = 0;
	c = str[0];
	while (c != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = str[x] + 32;
		x++;
		c = str[x];
	}
	return (str);
}

/*int	main(void)
{
	char *str;
	char array[10] = "Hola";
	str = array;

	ft_strupcase(str);
	return (0);
}*/
