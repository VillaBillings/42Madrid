/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:49:59 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/27 18:57:41 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		x;
	int		y;
	char	*p;

	x = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		if (str[x] == to_find[y])
			y++;
		else
			y = 0;
		if (to_find[y] == '\0')
		{
			p = &str[x - y + 1];
			return (p);
		}
		x++;
	}
	return (0);
}
