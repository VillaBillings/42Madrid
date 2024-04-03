/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:02:46 by ivillanu          #+#    #+#             */
/*   Updated: 2024/04/02 18:37:20 by ivillanu         ###   ########.fr       */
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
	size_t		num_jump;
	size_t		len;

	len = ft_strlen(buf_final);
	num_jump = ft_findnchar(buf_final);
	if (num_jump < len)
		return (1);
	return (0);
}

char	*erase(char *buf, char *buf_temp, char *buf_final)
{
	printf ("IMPRIMIR PUNTEROS::\n");
	printf("buf temp %p\n", buf_temp);
	printf("buf  %p\n", buf);
	printf("buf final %p\n", buf_final);

    if (buf_temp)
    {
        free(buf_temp);
        buf_temp = NULL;
    }
    if (buf_final)
    {
        free(buf_final);
        buf_final = NULL;
    }
    if (buf)
    {
        free(buf);
        buf = NULL;
    }
    return(buf);
}

char	*get_loop(char *buf, char *buf_temp, char *buf_final, int fd)
{
	int	chars_read;
	int	len_jump;

	chars_read = 1;
	len_jump = BUFFER_SIZE;
	while (len_jump == BUFFER_SIZE)
	{
		chars_read = read(fd, buf_temp, BUFFER_SIZE);
		buf_temp[chars_read] = '\0';
		len_jump = ft_findnchar(buf_temp);
		buf = ft_strjoinlen(buf, buf_temp, len_jump);
		if (len_jump != BUFFER_SIZE)
			ft_memlcpy(buf_final, buf_temp + len_jump + 1, BUFFER_SIZE);
		// free(buf_temp);
		// buf_temp = NULL;
	}
	if (chars_read <= 0)
	{
		erase(buf, buf_temp, buf_final);
	}
	return(buf);
}

char	*get_next_line(int fd)
{
	char			*buf;
	char			*buf_temp;
	static	char	*buf_final;
	int				has_jump;

	buf = NULL;
	buf_temp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf_temp)
		return (NULL);
	if (!buf_final)
	{
		buf_final = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buf_final)
			return (NULL);
	}
	has_jump = skip_final(buf_final);
	buf = final_jump(buf_final);
	if (has_jump == 0)
		buf = get_loop(buf, buf_temp, buf_final, fd);
	return (buf);
}

int main(void)
{
	int		fd;
	char	*content = "";
	int		i;

	i = 0;
	fd = open("file.txt", O_RDONLY);
	while (content)
	{
		content = get_next_line(fd);
		printf("%s\n", content);
		i++;
		free(content);
	}
	close(fd);
	return (0);
}
