/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:46:48 by ivillanu          #+#    #+#             */
/*   Updated: 2024/02/03 18:24:13 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sour;
	size_t			i;

	dest = (unsigned char *)dst;
	sour = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dest[i] = sour[i];
		i++;
	}
	return (dst);
}
