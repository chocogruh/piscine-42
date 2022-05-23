/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:45:12 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/22 14:02:14 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{	
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int	main()
{
	char str[10] = "G85";
	char str1[10] = "gruh";

	printf("%d\n", ft_str_is_lowercase(str));
	printf("%d\n", ft_str_is_lowercase(str1));
}
