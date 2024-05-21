/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:25:21 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/24 19:24:39 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			x;
	size_t			y;
	unsigned int	len_dest;
	unsigned int	len_src;

	y = 0;
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	if (dstsize < len_dest)
		return (dstsize + len_src);
	x = ft_strlen(dst);
	while (src[y] != '\0' && x < dstsize - 1)
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[x] = '\0';
	return (len_dest + len_src);
}
