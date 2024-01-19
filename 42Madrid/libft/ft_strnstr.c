/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:17:38 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/18 16:48:07 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	i = 0;
	while (i < (int)len)
	{
		if (haystack == needle)
		{
			needle++;
			i++;
			if (needle[i] == '\0')
				return ((void *)(haystack - i));
		}
		else
		{
			needle = needle - i;
			i = 0;
		}
		haystack++;
	}
	return (NULL);
}
