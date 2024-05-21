/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:41:57 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/24 19:44:01 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	x;

	x = (char)c;
	i = ft_strlen(s);
	if (x == '\0')
		return ((char *)(s + i));
	while (i > 0)
	{
		if (*(s + i -1) == x)
		{
			return ((char *)(s + i - 1));
		}
		i--;
	}
	return (0);
}
