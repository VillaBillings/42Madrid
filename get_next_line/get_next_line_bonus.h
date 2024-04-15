/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:32:49 by ivillanu          #+#    #+#             */
/*   Updated: 2024/04/11 15:47:26 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>

size_t	ft_strlen(char *s);
char	*ft_strlcpy(char *dst, char *src, size_t dstsize);
char	*ft_strjoinlen(char **s1, char **s2, size_t len);
size_t	count_to_jump(char *buf);
char	**cut_temp(char **temp, char **final);
char	*join_fin(char **final);
char	*loop(int fd, char **buf, char **final);
char	*get_next_line(int fd);
char	*free_null(char **s);

#endif