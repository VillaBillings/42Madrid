/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:40:24 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/26 12:40:39 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = b;
	while (i < len)
	{
		*a = (unsigned char)c;
		a++;
		i++;
	}
	return (a - i);
}
