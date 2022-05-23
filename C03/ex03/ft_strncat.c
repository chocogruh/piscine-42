/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:29:28 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/16 17:22:01 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char *src = "Gruh";
	char *dest = " Bouh";


	printf("%s\n", ft_strncat(src, dest, 2));
	return (0);
}*/

/*int main (int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char *resultat;

	printf("arg1:%s\t arg2: %s\t nb:%d\n", argv[1], argv[2], atoi(argv[3]));
	resultat = ft_strncat(argv[1], argv[2], atoi(argv[3]));
	printf("Result :%s\n", resultat);
}*/
