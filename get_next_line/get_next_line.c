/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:33:00 by ivillanu          #+#    #+#             */
/*   Updated: 2024/04/03 12:18:03 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

char	**cut_temp(char **temp, char **final)
{
	size_t	len_to_jump;

	len_to_jump = count_to_jump(*temp);
	*final = ft_strjoinlen(*final, *temp + len_to_jump + 1, BUFFER_SIZE);
	*temp = ft_strlcpy(*temp, *temp, len_to_jump + 1);
	return (temp);
}

char	**join_buf(char **buf, char **temp)
{
	size_t	len;

	len = ft_strlen(*buf);
	*buf = ft_strjoinlen(*buf, *temp, len);
	return (buf);
}

char	*join_fin(char *buf, char *final)
{
	size_t	len_to_jump;

	len_to_jump = count_to_jump(final);
	buf = ft_strjoinlen(buf, final, len_to_jump + 1);
	final = ft_strjoinlen(final, final + len_to_jump + 1, BUFFER_SIZE);
	return (buf);
}

char	*loop(int fd, char *buf, char *temp, char *final)
{
	int				len;
	int				chars_read;
	int				has_jump;
	size_t			len_buf;

	len = ft_strlen(buf);
	while (buf[len + 1] != '\n')
	{
		chars_read = read(fd, temp, BUFFER_SIZE);
		temp[chars_read] = '\0';
		//  Añadir caso en el que chars_read = 0 y < 0
		has_jump = 0;
		if (temp_has_jump(temp))
			cut_temp(&temp, &final);
		len_buf = ft_strlen(temp);
		buf = ft_strjoinlen(buf, temp, len_buf);
		len = ft_strlen(buf);
		printf("`%d´", buf);
	}
	return (buf);
}

char	*get_next_line(int fd)
{
	char			*buf;
	char			*temp;
	static	char	*final;

	buf = NULL;
	temp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	if (!final)
	{
		final = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!final)
			return (NULL);
	}
	else
		buf = join_fin(buf, final);
	loop(fd, buf, temp, final);
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
