/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:02:46 by ivillanu          #+#    #+#             */
/*   Updated: 2024/03/13 16:49:26 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

char	*joinbuf(char *buf, char *buf_temp, int num_jump)
{
	if (num_jump == 0)
	{
		buf = ft_strjoin(buf, buf_temp);
	}
	else
	{
		buf = ft_strjoinlen(buf, buf_temp, num_jump);
		free(buf_temp);
	}
	return (buf);
}

char	*get_next_line(int fd)
{
	char			*buf;
	char			*buf_temp;
	static	char	*buf_final;
	int				num_jump;
	int				chars_read;

	buf = NULL;
	num_jump = 0;
	chars_read = 1;
	buf_temp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf_temp)
		return (NULL);
	if (!buf_final)
	{
		buf_final = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buf_final)
			return (NULL);
	}
	buf = joinbuf(buf, buf_final, BUFFER_SIZE);
	while (num_jump == 0)
	{
		chars_read = read(fd, buf_temp, BUFFER_SIZE);
		buf_temp[chars_read] = '\0';
		num_jump = ft_findnchar(buf_temp);
		buf = joinbuf(buf, buf_temp, num_jump);
		if (num_jump != 0)
			ft_memlcpy(buf_final, buf_temp + num_jump + 1, BUFFER_SIZE);
	}
	return (buf);
}

// int main(void)
// {
// 	int file_descriptor = open("file.txt", O_RDONLY);
// 	char *line;
// 	int lines = 1;
// 	// Process the line
// 	int count = 10;
// 	while (count--)
// 	{
// 		line = get_next_line(file_descriptor);
// 		printf("%i -> %s \n", lines++, line);
// 	}
// 	// Free the memory allocated for the line
// 	free(line);
// 	close(file_descriptor);
// 	return (0);
// }
