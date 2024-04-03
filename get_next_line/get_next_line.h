/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:32:49 by ivillanu          #+#    #+#             */
/*   Updated: 2024/04/03 17:45:43 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 20
# endif
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

size_t	ft_strlen(char *s);
char	*ft_strlcpy(char *dst, char *src, size_t dstsize);
char	*ft_strjoinlen(char *s1, char *s2, size_t len);
size_t	count_to_jump(char *buf);
char	**cut_temp(char **temp, char **final);
char	**join_buf(char **buf, char **temp);
char	**join_fin(char **buf, char **final);
char	**loop(int fd, char **buf, char *temp, char **final);
char	*get_next_line(int fd);
char	*free_null(char **s);

#endif