/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:19:49 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/21 12:51:51 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		x;
	int		alf;
	char	c;

	x = 0;
	alf = 0;
	c = str[0];
	while (c != '\0')
	{
		if (str[x] >= 32 && str[x] <= 127)
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

	ft_str_is_printable(str);
	return (0);
}*/