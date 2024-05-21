/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:21:16 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/30 12:21:16 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;

	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (len == 0 || start > ft_strlen(s))
	{
		d = (char *)malloc((1) * sizeof(char));
		if (!d || !s)
			return (0);
		d[0] = 0;
		return (d);
	}
	d = (char *)malloc((len +1) * sizeof(char));
	if (!d || !s)
		return (0);
	ft_strlcpy(d, s + start, len + 1);
	return (d);
}

// #include <stdio.h>
// int		main(int argc, const char *argv[])
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	char	*strsub;
// 	int		arg;

// 	printf("%s\n", ft_substr(str, 0, 10));
// }