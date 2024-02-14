/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:21:02 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/22 16:54:05 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		x;
	int		alf;
	char	c;

	x = 0;
	alf = 0;
	c = str[0];
	while (c != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z')
			|| (str[x] >= 'a' && str[x] <= 'z'))
			alf++;
		x++;
		c = str[x];
	}
	if (alf < x)
		return (0);
	else
		return (1);
}

/*int	main(void)
{
	char *str;
	char array[10] = "Hola";
	str = array;

	ft_str_is_alpha(str);
	return (0);
}*/
