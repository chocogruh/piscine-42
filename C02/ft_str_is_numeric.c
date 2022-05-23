/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:36:38 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/13 15:43:21 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main()

{
	char str[6] = "bouh";
	char str1[10] = "157";

	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(str1));
}*/
