/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 23:55:13 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/20 17:00:26 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	ft_putnbr(atoi(argv[1]));
}*/
