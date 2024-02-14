/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:25:47 by marvin            #+#    #+#             */
/*   Updated: 2024/02/05 16:25:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	count_num(int n, size_t len)
{
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	fill(int n, size_t len, char *s)
{
	s[len] = '\0';
	len--;
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	if (n == 0)
		s[0] = '0';
	while (n > 0)
	{
		s[len] = (n % 10) + '0';
		len--;
		n = n / 10;
	}
}

void	max_min(int n, char **s)
{
	if (n == 2147483647)
	{
		*s = (char *)malloc((11) * sizeof(char));
		if (!*s)
			return ;
		ft_strlcpy(*s, "2147483647", 11);
	}
	else
	{
		*s = (char *)malloc((12) * sizeof(char));
		if (!*s)
			return ;
		ft_strlcpy(*s, "-2147483648", 12);
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;

	s = 0;
	len = 2;
	if (n == 2147483647 || n == -2147483648)
	{
		max_min(n, &s);
		return (s);
	}
	len = count_num(n, len);
	s = (char *)malloc((len) * sizeof(char));
	if (!s)
		return (0);
	len--;
	fill(n, len, s);
	return (s);
}
