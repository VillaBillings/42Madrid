/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:33:04 by ivillanu          #+#    #+#             */
/*   Updated: 2024/04/05 19:49:33 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	int		x;

	x = 0;
	if (!s)
		return (0);
	while (s[x] != '\0')
		x++;
	return (x);
}

char	*ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	x;

	x = 0;
	if (dstsize > 0)
	{
		while (x < dstsize - 1 && src[x] != '\0')
		{
			dst[x] = src[x];
			x++;
		}
	}
	dst[x] = '\0';
	return (dst);
}

char	*ft_strjoinlen(char *s1, char *s2, size_t len)
{
	size_t	max_len;
	size_t	len_s1;
	char	*d1;

	if (!s1 && !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	max_len = len + len_s1;
	d1 = (char *)malloc((max_len + 1) * sizeof(char));
	if (!d1)
	{
		free_null(&s2);
		return (NULL);
	}
	ft_strlcpy(d1, s1, len_s1 + 1);
	ft_strlcpy(d1 + len_s1, s2, len + 1);
	if (s1)
		free_null(&s1);
	return (d1);
}

size_t	count_to_jump(char *buf)
{
	int	i;

	i = 0;
	if (!buf)
		return (0);
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
			return (i);
		i++;
	}
	return (i);
}

char	*free_null(char **s)
{
	if (*s != NULL)
	{
		free(*s);
		*s = NULL;
	}
	return (NULL);
}
