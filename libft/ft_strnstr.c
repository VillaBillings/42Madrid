/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:17:38 by ivillanu          #+#    #+#             */
/*   Updated: 2024/02/03 16:21:59 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	x;

	i = 0;
	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (x < len && haystack[x] != '\0')
	{
		i = 0;
		while (haystack[x + i] == needle[i] && (x + i) < len)
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[x]);
		}
		x++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	haystack[] = "aaabcabcd";
	const char	needle[] = "aabc";
	size_t		len;
	char		*result;
	char		*originalResult;

	len = -1;
	result = ft_strnstr(haystack, needle, len);
	if (result)
		printf("La función ft_strnstr encontró la subcadena: %s\n", result);
	else
		printf("La función ft_strnstr no encontró la subcadena.\n");

	// Comparación con la función original strnstr
	
	originalResult = strnstr(haystack, needle, len);
	if ((result == NULL && originalResult == NULL) || strcmp(result,
			originalResult) == 0)
	{
		printf("La implementación de ft_strnstr es correcta.\n");
	}
	else
	{
		printf("La implementación de ft_strnstr es incorrecta.\n");
	}
	return (0);
}
*/