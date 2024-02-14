/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:57:34 by isainz-r          #+#    #+#             */
/*   Updated: 2023/11/12 23:15:18 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_write_string(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	error(int x, int y)
{
	if (x < 1 || y < 1)
	{
		ft_write_string("ERROR | only positive numbers are permitted :(");
		ft_write_string("	please, change your inmputs and try again");
		return (1);
	}
	return (0);
}

void	ft_logic(int x, int y, int a, int b)
{
	if ((b == 1 && a == 1) || (b == 1 && a == x))
	{
		ft_putchar('A');
	}
	else if ((b != 1 && b != y && a != 1 && a != x))
	{
		ft_putchar(' ');
	}
	else if ((b == y && a == x) || (b == y && a == 1))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush( int x, int y)
{
	int	a;
	int	b;
	int	err;

	err = error(x, y);
	b = 1;
	while (b <= y && x * y > 0 && !err)
	{
		a = 1;
		while (a <= x)
		{
			ft_logic(x, y, a, b);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
