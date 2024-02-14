/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:53:20 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/23 16:19:59 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	x = 0;
	while (x < size - 1 && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (x);
}

/*int	main(void)
{
	char *dest;
	char *src;
	char array[10] = "Hola";
	char array2[10] = "ErroMundo";
	src = array;
	dest = array2;
	int size = 4;

	ft_strlcpy(dest, src, size);
	return (0);
}*/
