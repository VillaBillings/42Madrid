/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:33:11 by ivillanu          #+#    #+#             */
/*   Updated: 2024/02/09 12:23:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = (char)c;
	while (*s != '\0')
	{
		if (*s == d)
			return ((char *)s);
		s++;
	}
	if (d == '\0')
		return ((char *)s);
	else
		return (0);
}
