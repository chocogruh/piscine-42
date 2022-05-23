/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 02:42:22 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/23 14:14:53 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power < 0)
		return (0);
	else if (power > 0)
		n = (nb * n) * ft_recursive_power(nb, power - 1);
	return (n);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("My result : %d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}*/
