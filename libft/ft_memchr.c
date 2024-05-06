/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:57:17 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/25 16:35:35 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*srt;
	size_t			i;

	i = 0;
	x = (unsigned char)c;
	srt = (unsigned char *)s;
	while (i < n)
	{
		if (srt[i] == x)
			return (srt + i);
		i++;
	}
	return (0);
}
