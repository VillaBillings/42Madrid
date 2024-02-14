/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:40:57 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/22 14:51:22 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	c;
	int		x;

	x = 0;
	c = src[0];
	while (c != '\0')
	{
		dest[x] = src[x];
		x++;
		c = src[x];
	}
	c = dest[x];
	while (c != '\0')
	{
		c = dest[x];
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

/*int	main(void)
{
	char array[10] = "Hola";
	char array2[10] = "ErroMundo";

	ft_strcpy(array2, array);
	return (0);
}*/