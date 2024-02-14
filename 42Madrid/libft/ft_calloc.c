/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:46:08 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/26 12:52:08 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	s = malloc(count * size);
	if (s != 0)
		ft_memset(s, 0, count * size);
	return (s);
}
