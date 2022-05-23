/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:12:23 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/21 12:31:55 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0 || index == 1)
	{
		return (index);
	}
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("My result : %d\n", ft_fibonacci(atoi(argv[1])));
	return (0);
}*/
