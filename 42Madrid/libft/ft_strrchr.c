/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:41:57 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/18 16:42:17 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	char	*d;
	int		i;


	x = (char)c;
	i = 0;
	while (s)
		i++;
	while (i > 0)
	{
		if ((char)s == x)
		{
			d = (char *)s;
			return (d);
		}
		s--;
		i--;
	}
	d = (char *)s;
	return (d);
}
