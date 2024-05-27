/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:42:42 by ivillanu          #+#    #+#             */
/*   Updated: 2024/05/23 19:09:13 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlenprintf(char *s)
{
	int		x;

	x = 0;
	if (!s)
		return (0);
	while (s[x] != '\0')
		x++;
	return (x);
}

int	ft_porcent_letter(va_list vargs, char c)
{
	int	value;

	value = 0;
	if (c == 'c')
		value = ft_putchar_fd(va_arg(vargs, int));
	else if (c == 's')
		value = ft_putstr_fd(va_arg(vargs, char *));
	else if (c == 'p')
		value = ft_putptr(va_arg(vargs, unsigned long));
	else if (c == 'd' || c == 'i')
		value = ft_putnbr_fd(va_arg(vargs, int));
	else if (c == 'u')
		value = ft_putnbr_base_fd(va_arg(vargs, unsigned int), "0123456789");
	else if (c == 'x')
		value = ft_putnbr_base_fd(va_arg(vargs, unsigned int),
			"0123456789abcdef");
	else if (c == 'X')
		value = ft_putnbr_base_fd(va_arg(vargs, unsigned int),
			"0123456789ABCDEF");
	else if (c == '%')
		value = ft_putchar_fd('%');
	return (value);
}

int	ft_printf(const char *str, ...)
{
	va_list	vargs;
	int		value;
	int		i;

	i = 0;
	value = 0;
	va_start(vargs, str);
	while (str[i])
	{
		if (str[i] == '%')
			value += ft_porcent_letter(vargs, str[++i]);
		else
			value += ft_putchar_fd(str[i]);
		i++;
	}
	va_end(vargs);
	return (value);
}

// #include <stdio.h>
// int	main()
// {
// 	int len = 0;
// 	 int	i = 4542;
// 	char c = 'd';
// 	char *d = "No Rest For The Wicked";

// 	len = ft_printf("1-> %x\n", i);
// 	printf("len = %d\n", len);
	
// 	len = printf("2-> %x\n", i);
// 	printf("len = %d\n", len);

// 	return (0);
// }