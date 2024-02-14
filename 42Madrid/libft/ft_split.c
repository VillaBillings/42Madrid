/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:06:21 by marvin            #+#    #+#             */
/*   Updated: 2024/02/08 12:06:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **arr, int j)
{
	while (j >= 0)
	{
		free(arr[j]);
		j--;
	}
}

static size_t	strchrlen(size_t start, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[start + i] != c && s[start + i] != '\0')
		i++;
	return (i);
}

static	size_t	count_str(char const *s, char c)
{
	size_t		count;

	count = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		while (*s && *s == c)
			s++;
	}
	return (count + 1);
}

static	int	input_strings(char **arr, char const *s, size_t count, char c)
{
	size_t	i;
	int		j;
	size_t	len;	

	i = 0;
	j = 0;
	while (j < (int)count - 1)
	{
		while (s[i] == c)
			i++;
		len = strchrlen(i, s, c);
		arr[j] = (char *)malloc((len + 1) * sizeof(char));
		if (!arr[j])
		{
			free_all(arr, j);
			return (0);
		}
		ft_strlcpy(arr[j], s + i, len + 1);
		i = i + len;
		j++;
	}
	arr[count - 1] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	size_t		count;

	if (!s)
		return (NULL);
	count = count_str(s, c);
	arr = (char **)malloc(count * sizeof(char *));
	if (!arr)
		return (0);
	if (!input_strings(arr, s, count, c))
	{
		free(arr);
		return (NULL);
	}
	return (arr);
}

// #include "libft.h"

// size_t	count_c(char const *s, char c)
// {
// 	size_t	count;

// 	count = 0;
// 	while (*s)
// 	{
// 		if (*s && *s != c)
// 		{
// 			count++;
// 			while (*s && *s != c)
// 				s++;
// 		}
// 		while (*s && *s == c)
// 			s++;
// 	}
// 	return (count + 1);
// }

// size_t	len_of_c(size_t start, char const *s, char c)
// {
// 	size_t	len_c;

// 	len_c = 0;
// 	while (s[start + len_c] != c && s[start + len_c] != '\0')
// 		len_c++;
// 	return (len_c);
// }

// int	split_strings(char const *s, char c, char **str, size_t count)
// {
// 	size_t	i;
// 	size_t	start;
// 	size_t	len_c;

// 	i = 0;
// 	start = 0;
// 	while (i < count - 1)
// 	{
// 		while (s[start] == c)
// 			start++;
// 		len_c = len_of_c(start, s, c);
// 		str[i] = (char *)malloc((len_c + 1) * sizeof(char));
// 		if (!str[i])
// 		{
// 			while (i)
// 			{
// 				free(str[i]);
// 				i--;
// 			}
// 			return (0);
// 		}
// 		ft_strlcpy(str[i], s + start, len_c + 1);
// 		start = start + len_c;
// 		i++;
// 	}
// 	str[count - 1] = NULL;
// 	return (1);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**str;
// 	size_t	count;

// 	count = count_c(s, c);
// 	str = (char **)malloc(count * sizeof(char *));
// 	if (!str)
// 		return (NULL);
// 	if (!split_strings(s, c, str, count))
// 	{
// 		free(str);
// 		return (NULL);
// 	}
// 	return (str);
// }
