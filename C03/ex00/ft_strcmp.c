/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:20:33 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/16 17:19:50 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*int	main ()
{
	char	s1[] = "12354";
	char	s2[] = "123";

	printf("%d\n", ft_strcmp(s1, s2));
    printf("%d\n", strcmp(s1, s2));
}*/
