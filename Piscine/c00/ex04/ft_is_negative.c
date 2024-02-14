/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:17:00 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/16 11:39:26 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letra;

	if (n < '0')
	{
		letra = 'N';
	}
	if (n >= 0)
	{
		letra = 'P';
	}
	write(1, &letra, 1);
}

/*int main(void)
{
    int n;

    n = -5;

    ft_is_negative(n);

    return 0;
}*/
