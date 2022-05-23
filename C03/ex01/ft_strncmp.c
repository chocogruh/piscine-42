/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:51:24 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/16 22:21:58 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < (n - 1) && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*int	main(void)

{
	char	s1[] = "baleine";
	char	s2[] = "hibou";

	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d\n", strncmp(s1, s2, 0));
}*/
