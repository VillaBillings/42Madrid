/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:02:46 by ivillanu          #+#    #+#             */
/*   Updated: 2024/03/11 18:36:39 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		num_jump;
	int		chars_read;
	char	*buf;
	char	*buf_temp;

	num_jump = 0;
	chars_read = 1;
	buf = NULL;
	buf_temp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf_temp)
		return (NULL);
	while (num_jump == 0)
	{
		chars_read = read(fd, buf_temp, BUFFER_SIZE);
		buf_temp[chars_read] = '\0';
		num_jump = ft_findnchar(buf_temp);
		if (num_jump == 0)
		{
			buf = ft_strjoin(buf, buf_temp);
		}
		else
		{
			buf = ft_strjoinlen(buf, buf_temp, num_jump);
			free(buf_temp);
		}
	}
	return (buf);
}

int main(void)
{
	int file_descriptor = open("file.txt", O_RDONLY);
	char* line = get_next_line(file_descriptor);
	char* line2 = get_next_line(file_descriptor);
	char* line3 = get_next_line(file_descriptor);
	char* line4 = get_next_line(file_descriptor);
	char* line5 = get_next_line(file_descriptor);
	char* line6 = get_next_line(file_descriptor);
	char* line7 = get_next_line(file_descriptor);
	char* line8 = get_next_line(file_descriptor);

	// Process the line
	printf("%s", line);
	printf("%s \n", line2);
	printf("%s \n", line3);
	printf("%s \n", line4);
	printf("%s \n", line5);
	printf("%s \n", line6);
	printf("%s \n", line7);
	printf("%s \n", line8);
	// Free the memory allocated for the line
	//free(line);
	free(line);
	free(line2);
	free(line3);
	free(line4);
	free(line5);
	free(line6);
	free(line7);
	free(line8);

	close(file_descriptor);
	return (0);
}
