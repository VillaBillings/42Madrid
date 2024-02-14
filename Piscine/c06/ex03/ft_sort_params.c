/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 02:20:42 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/30 17:59:51 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	x;
	int	n;

	x = 0;
	n = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
	{
		x++;
	}
	if (s1[x] != s2[x])
		n = s1[x] - s2[x];
	return (n);
}

/*
void	ft_sort_tab(int *tab, int size)
{
	int	x;
	int	c;
	int	i;

	x = 0;
	i = 1;
	while (x < size - 1)
	{
		x = 0;
		while (i < size)
		{
			if (tab[size - i] < tab[size - i - 1])
			{
				c = tab[size - i];
				tab[size - i] = tab[size - i - 1];
				tab[size - i - 1] = c;
			}
			else
				x++;
			i++;
		}
		i = 1;
	}
}
*/

void	ft_swap(char **a, char **b)
{
	char	*aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv [j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j ++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
