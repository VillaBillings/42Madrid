/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:06:29 by ivillanu          #+#    #+#             */
/*   Updated: 2024/04/24 13:29:32 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putchar_fd(char c);
int	ft_putstr_fd(char *s);
int	ft_putnbr_fd(int n);
int	ft_putnbr_base_fd(size_t n, char *base);
int	ft_putptr(unsigned long ptr);
int	ft_strlen(char *s);

#endif