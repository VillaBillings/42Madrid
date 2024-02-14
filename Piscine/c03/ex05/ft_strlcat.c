/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:25:12 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/28 10:23:24 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lenstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*mix;
	int				x;
	int				y;
	unsigned int	len_dest;
	unsigned int	len_src;

	y = 0;
	mix = dest;
	len_dest = ft_lenstr(dest);
	len_src = ft_lenstr(src);
	if (size == 0)
		return (len_src);
	if (size <= len_dest)
		return (size + len_src);
	x = len_dest + ft_lenstr(src);
	while (src[y] != '\0' && x < size - 1)
	{
		mix[x] = src[y];
		y++;
		x++;
	}
	mix[x] = '\0';
	return (x);
}
