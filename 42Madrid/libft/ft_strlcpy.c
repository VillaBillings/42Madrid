/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:36:56 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/24 19:12:38 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;

	x = 0;
	if (dstsize > 0)
	{
		while (x < dstsize - 1 && src[x] != '\0')
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	return (ft_strlen(src));
}
