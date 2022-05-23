/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:53:16 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/20 22:39:07 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	i = 2;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("My result : %d\n", ft_iterative_factorial(atoi(argv[1])));
}*/
