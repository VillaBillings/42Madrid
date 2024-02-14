/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:53:07 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/26 18:07:40 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h" 

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s1) + 1;
	copy = malloc (len * sizeof(char));
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s1, len);
	return (copy);
}
