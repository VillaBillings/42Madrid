/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:02:46 by ivillanu          #+#    #+#             */
/*   Updated: 2024/04/01 12:21:59 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

char	*final_jump(char *buf_final)
{
	int		len;
	int		num_jump;
	char	*temp;

	temp = NULL;
	len = ft_strlen(buf_final);
	num_jump = ft_findnchar(buf_final);
	if (num_jump != BUFFER_SIZE)
	{
		temp = ft_strjoinlen(temp, buf_final, num_jump);
		ft_memlcpy(buf_final, buf_final + num_jump + 1, len);
	}
	else if (num_jump == BUFFER_SIZE)
	{
		temp = ft_strjoinlen(temp, buf_final, BUFFER_SIZE);
	} 
	return (temp);
}

int		skip_final(char	*buf_final)
{
	int			num_jump;
	size_t		len;

	len = ft_strlen(buf_final);
	num_jump = ft_findnchar(buf_final);
	if (num_jump < len)
		return (1);
	return (0);
}

char	*get_next_line(int fd)
{
	char			*buf;
	char			*buf_temp;
	static	char	*buf_final;
	int				len_jump;
	int				chars_read;

	buf = NULL;
	len_jump = BUFFER_SIZE;
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
	buf = final_jump(buf_final);
	while (len_jump == BUFFER_SIZE && !skip_final(buf_final))
	{
		chars_read = read(fd, buf_temp, BUFFER_SIZE);
		if (chars_read <= 0)
		{
			free(buf_temp);
			free(buf_final);
			free(buf);
			buf = NULL;
			buf_final = NULL;
			buf_temp = NULL;
			return(buf);
		}
		buf_temp[chars_read] = '\0';
		len_jump = ft_findnchar(buf_temp);
		buf = ft_strjoinlen(buf, buf_temp, len_jump);
		if (len_jump != BUFFER_SIZE)
			ft_memlcpy(buf_final, buf_temp + len_jump + 1, BUFFER_SIZE);
	} 
	return (buf);
}

int main(void)
{
	int file_descriptor = open("file.txt", O_RDONLY);
	char *line;
	int lines = 1;
	// Process the line
	int count = 6;
	while (count--)
	{
		line = get_next_line(file_descriptor);
		printf("%i ->   %s\n", lines++, line);
		free (line);
		line = NULL;
	}
	// Free the memory allocated for the line
	free(line);
	close(file_descriptor);
	return (0);
}
