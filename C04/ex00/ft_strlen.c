/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:52:07 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/16 20:36:03 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char*str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("Str : %s\n", argv[1]);
	printf("My result : %d\n", ft_strlen(argv[1]));
	printf("Resultat original : %lu\n", strlen(argv[1]));
}*/
