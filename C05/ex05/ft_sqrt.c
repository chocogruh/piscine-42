/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:33:44 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/23 14:14:24 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	while (i <= nb / 2)
	{
		if (i > 46340)
			return (0);
		else if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("My result : %d\n", ft_sqrt(atoi(argv[1])));
	printf("sqrt of %d is %d\n", -2650, ft_sqrt(-2650));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
	printf("sqrt of %d is %d\n", 1357185600, ft_sqrt(1357185600));
	printf("sqrt of %d is %d\n", 1146580243, ft_sqrt(1146580243));
	printf("sqrt of %d is %d\n", 1282929124, ft_sqrt(1282929124));
	printf("sqrt of %d is %d\n", 1832825881, ft_sqrt(1832825881));
	printf("sqrt of %d is %d\n", 403225, ft_sqrt(403225));
	printf("sqrt of %d is %d\n", 704632395, ft_sqrt(704632395));
	printf("sqrt of %d is %d\n", 20985561, ft_sqrt(20985561));
	printf("sqrt of %d is %d\n", 175357372, ft_sqrt(175357372));
	printf("sqrt of %d is %d\n", 1572519025, ft_sqrt(1572519025));
	printf("sqrt of %d is %d\n", 433052867, ft_sqrt(433052867));
}*/
