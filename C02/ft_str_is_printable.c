/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:41:52 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/13 17:04:42 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main ()
{
	char	str[10] = " ";
	char	str1[10] = "!";
	char	str2[10] = "bouh";

	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
}*/
