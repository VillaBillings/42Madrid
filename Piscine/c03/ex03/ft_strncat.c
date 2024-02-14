/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:34:11 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/27 17:06:26 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*mix;
	int				x;
	unsigned int	y;

	mix = dest;
	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (y < nb && src[y] != '\0')
	{
		mix[x] = src[y];
		y++;
		x++;
	}
	mix[x] = '\0';
	return (mix);
}

/*int main(void)
{

	char uno[30] = "Hola";
	char dos[] = "Mundo";

	ft_strncat(uno, dos);
	return (0);
}*/
