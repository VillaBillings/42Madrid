/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:33:00 by ivillanu          #+#    #+#             */
/*   Updated: 2024/04/08 18:13:20 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

char	**cut_temp(char **temp, char **final)
{
	size_t	len_to_jump;

	len_to_jump = count_to_jump(*temp);
	*final = ft_strlcpy(*final, *temp + len_to_jump + 1, BUFFER_SIZE);
	*temp = ft_strlcpy(*temp, *temp, len_to_jump + 2);
	return (temp);
}

char	*join_fin(char **final)
{
	size_t	len_to_jump;
	char	*buf;

	len_to_jump = count_to_jump(*final);
	buf = malloc(len_to_jump + 2);
	if (!buf)
		return (NULL);
	buf = ft_strlcpy(buf, *final, len_to_jump + 2);
	*final = ft_strlcpy(*final, *final + len_to_jump + 1,
			ft_strlen(*final) - len_to_jump + 1);
	return (buf);
}

int	buf_has_jump(char *buf)
{
	size_t		len;
	size_t		num_jump;

	if (!buf)
		return (0);
	len = ft_strlen(buf);
	num_jump = count_to_jump(buf);
	if (num_jump == len)
		return (1);
	return (0);
}

char	*loop(int fd, char **buf, char **final)
{
	int		chars_read;
	int		has_jump;
	char	*temp;

	temp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	has_jump = buf_has_jump(*buf);
	while (has_jump)
	{
		chars_read = read(fd, temp, BUFFER_SIZE);
		if (chars_read < 0)
			return (free_null(&temp), NULL);
		temp[chars_read] = '\0';
		if (!buf_has_jump(temp))
		{
			cut_temp(&temp, final);
			has_jump = 0;
		}
		*buf = ft_strjoinlen(buf, &temp, ft_strlen(temp));
		if (chars_read == 0 || !*buf)
			return (free_null(final),
				free_null(&temp), *buf);
	}
	return (free_null(&temp), *buf);
}

char	*get_next_line(int fd)
{
	char		*buf;
	static char	*final;

	buf = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!final)
	{
		buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buf)
			return (NULL);
		buf[0] = '\0';
		final = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!final)
			return (free_null(&buf));
	}
	else
		buf = join_fin(&final);
	if (!buf || !loop(fd, &buf, &final))
		return (free_null(&buf), free_null(&final), NULL);
	if (buf[0] == '\0')
		return (free_null(&buf), free_null(&final), NULL);
	return (buf);
}

// char	*get_next_line(int fd)
// {
// 	char			*buf;
// 	char			*temp;
// 	static	char	*final;

// 	buf = NULL;
// 	temp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
// 	if (!temp)
// 		return (NULL);
// 	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
// 	if (!buf)
// 		return (NULL);
// 	if (!final)
// 	{
// 		final = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
// 		if (!final)
// 			return (NULL);
// 	}
// 	else
// 	{
// 		size_t	len_to_jump;

// 		len_to_jump = count_to_jump(final);
// 		buf = ft_strjoinlen(buf, final, len_to_jump + 1);
// 		final = ft_strlcpy(final, final + len_to_jump
//				 + 1, ft_strlen(final) - len_to_jump + 1);
// 	}

// 	int				chars_read;
// 	int				has_jump;

// 	has_jump = 1;
// 	has_jump = buf_has_jump(buf);
// 	while (has_jump)
// 	{
// 		chars_read = read(fd, temp, BUFFER_SIZE);
// 		if (!chars_read)
// 		{
// 			free_null(&buf);
// 			free_null(&final);
//         	break;
// 		}
// 		temp[chars_read] = '\0';
// 		//  Añadir caso en el que chars_read = 0 y < 0
// 		if (!buf_has_jump(temp))
// 		{
// 			cut_temp(&temp, &final);
// 			has_jump = 0;
// 		}
// 		buf = ft_strjoinlen(buf, temp, ft_strlen(temp));
// 		if (has_jump == 0)
// 			break;
// 	}
// 	return (buf);
// }

int	main(void)
{
	int		fd;
	char	*content = "";
	int		i;

	i = 0;
	fd = open("file.txt", O_RDONLY);
	while (content)
	{
		content = get_next_line(fd);
		printf("%s", content);
		i++;
		free(content);
	}
	close(fd);
	return (0);
}
