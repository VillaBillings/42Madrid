/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillanu <ivillanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:58:24 by ivillanu          #+#    #+#             */
/*   Updated: 2023/11/28 10:23:01 by ivillanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*int main(void)
{
	char *s1;
	char *s2;
	char uno[] = "Hola";
	char dos[] = "Mundos";

	s1 = uno;
	s2 = dos;
	ft_strcmp(s1, s2);
	return (0);
}*/
