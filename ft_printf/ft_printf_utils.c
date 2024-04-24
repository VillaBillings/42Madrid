/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:42:37 by ivillanu          #+#    #+#             */
/*   Updated: 2024/04/24 15:46:44 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr_fd(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr_fd("(null)"));
	while (s[i])
	{
		ft_putchar_fd(s[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr_fd(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i = 11;
		ft_putstr_fd("-2147483648");
	}
	else
	{
		if (n < 0)
		{
			i += ft_putchar_fd('-');
			n = n * -1;
		}
		if (n > 9)
		{
			i += ft_putnbr_fd(n / 10);
		}
		i += ft_putchar_fd(n % 10 + '0');
	}
	return (i);
}

int	ft_putnbr_base_fd(size_t n, char *base)
{
	int		res;
	size_t	len;

	res = 0;
	if (!base)
		return (0);
	len = ft_strlen(base);
	if (n >= len)
	{
		res += ft_putnbr_base_fd(n / len, base);
	}
	res += ft_putchar_fd(base[n % len]);
	return (res);
}

int	ft_putptr(unsigned long ptr)
{
	int	result;

	result = 0;
	result += ft_putstr_fd("0x");
	result += ft_putnbr_base_fd(ptr, "0123456789abcdef");
	return (result);
}
