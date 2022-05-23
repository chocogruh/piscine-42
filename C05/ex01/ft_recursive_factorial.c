/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:23:26 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/23 14:15:08 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return ((nb * 1) * ft_recursive_factorial(nb - 1));
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("My result : %d\n", ft_recursive_factorial(atoi(argv[1])));
	printf("Factorial %d = %d\n", -10, ft_recursive_factorial(-10));
	printf("Factorial %d = %d\n", 0, ft_recursive_factorial(0));
	printf("Factorial %d = %d\n", 1, ft_recursive_factorial(1));
	printf("Factorial %d = %d\n", 2, ft_recursive_factorial(2));
	printf("Factorial %d = %d\n", 12, ft_recursive_factorial(12));
	printf("Factorial %d = %d\n", 4, ft_recursive_factorial(4));
	printf("Factorial %d = %d\n", 5, ft_recursive_factorial(5));
	printf("Factorial %d = %d\n", 6, ft_recursive_factorial(6));
	printf("Factorial %d = %d\n", 7, ft_recursive_factorial(7));
	printf("Factorial %d = %d\n", 8, ft_recursive_factorial(8));
	printf("Factorial %d = %d\n", 9, ft_recursive_factorial(9));
	printf("Factorial %d = %d\n", 10, ft_recursive_factorial(10));
	printf("Factorial %d = %d\n", 11, ft_recursive_factorial(11));
}*/
