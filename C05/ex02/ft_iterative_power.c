/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 22:32:46 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/22 23:50:59 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		i = nb * i;
		power--;
	}
	return (i);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("My result : %d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}*/
