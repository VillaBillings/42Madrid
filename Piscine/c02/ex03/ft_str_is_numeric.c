/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:36:18 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/22 16:36:44 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		x;
	int		alf;
	char	c;

	x = 0;
	alf = 0;
	c = str[0];
	while (c != '\0')
	{
		if (str[x] >= '0' && str[x] <= '9')
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
