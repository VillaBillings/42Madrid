/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:57:49 by ivillanu          #+#    #+#             */
/*   Updated: 2024/03/11 15:34:42 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
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

char	*ft_memlcpy(char *dst, char *src, size_t dstsize)
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
		dst[x] = '\0';
	}
	return (dst);
}

char	*ft_strjoinlen(char *s1, char *s2, size_t len)
{
	size_t	max_len;
	size_t	len_s1;
	char	*d1;

	if (!s1 && !s2)
		return (0);
	max_len = len;
	len_s1 = ft_strlen(s1);
	d1 = (char *)malloc((max_len + 1) * sizeof(char));
	if (!d1)
		return (NULL);
	ft_memlcpy(d1, s1, len_s1 + 1);
	ft_memlcpy(d1 + len_s1, s2, max_len + 1);
	return (d1);
}


int	ft_findnchar(char *read_buf)
{
	int	i;

	i = 0;
	if (!read_buf)
		return (0);
	while (read_buf[i] != '\0')
	{
		if (read_buf[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	max_len;
	size_t	len_s1;
	char	*d1;

	if (!s1 && !s2)
		return (0);
	max_len = ft_strlen(s1) + ft_strlen(s2);
	len_s1 = ft_strlen(s1);
	d1 = (char *)malloc((max_len + 1) * sizeof(char));
	if (!d1)
		return (NULL);
	ft_memlcpy(d1, s1, len_s1 + 1);
	ft_memlcpy(d1 + len_s1, s2, max_len + 1);
	return (d1);
}
