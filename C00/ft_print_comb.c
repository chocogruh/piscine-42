/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 01:09:10 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/04 19:27:56 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	variables(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{	
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				variables(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
