/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:33:11 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/18 16:38:37 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	x;
	char	*d;

	x = (char) c;
	while (s)
	{
		if (x == (char)s)
		{
			d = (char *)s;
			return (d);
		}
		s++;
	}
	d = (char *)s;
	return (d);
}
