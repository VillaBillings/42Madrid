/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:49:04 by marvin            #+#    #+#             */
/*   Updated: 2024/02/08 11:49:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*d;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	d = (char *)malloc((len + 1) * (sizeof(char)));
	if (!d)
		return (NULL);
	if (!s || !f)
		return (NULL);
	while (i < len)
	{
		d[i] = (*f)(i, s[i]);
		i++;
	}
	d[len] = '\0';
	return (d);
}
