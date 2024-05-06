/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:38:15 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/30 12:38:15 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
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
	ft_strlcpy(d1, s1, len_s1 + 1);
	ft_strlcpy(d1 + len_s1, s2, max_len + 1);
	return (d1);
}
