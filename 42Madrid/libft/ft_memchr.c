/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:57:17 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/18 16:46:29 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	x;
	int		i;

	i = 0;
	x = (char) c;
	while (i < (int)n)
	{
		if ((char)s == x)
		{
			return ((void *)s);
		}
		s++;
		i++;
	}
	return ((void *)s);
}
