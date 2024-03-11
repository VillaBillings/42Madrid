/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:59:22 by ivillanu          #+#    #+#             */
/*   Updated: 2024/03/11 12:44:45 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#  ifndef BUFFER_SIZE
#   define BUFFER_SIZE 3
#  endif
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strjoinlen(char *s1, char *s2, size_t len);
char	*ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t	ft_strlen(char *s);
int		ft_findnchar(char *s);
void	*ft_calloc(size_t count, size_t size);

#endif