/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:00:17 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/16 17:18:54 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	printf("Argv 1 :%s\tArgv 2 :%s\n", argv[1], argv[2]);
	printf("my result : %s\n", ft_strcat(argv[1], argv[2]));
	printf("Orignal result : %s\n", strcat(argv[1], argv[2]));
}*/
