/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:36:21 by ivillanu          #+#    #+#             */
/*   Updated: 2024/01/18 16:02:04 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	int				i;

	i = 0;
	a = s;
	while (i < (int)n)
	{
		*a++ = 0;
		i++;
	}
}

/*int	main(void)
{
	char *s1;
	char uno[] = "Hola";

	s1 = &uno;
	ft_bzero(s1, 2);
}*/