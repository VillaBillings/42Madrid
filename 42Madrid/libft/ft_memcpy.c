/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:46:48 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/18 16:06:15 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sour;
	int				i;

	dest= (unsigned char *)dst;
	sour = (unsigned char *)src;
	i = 0;
	while (i < (int)n || dest)
	{
		dest = sour;
		dest++;
		sour++;
		i++;
	}
	return (dst - i);
}

/*int	main(void)
{
	
}*/