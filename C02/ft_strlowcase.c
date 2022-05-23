/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:34:37 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/13 17:41:55 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main ()
{
	char	str[50] = "GRUH";
	char	str1[50] = "gvHn";

	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str1));
}*/
