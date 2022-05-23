/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:01:22 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/13 15:32:33 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
	char str[500] = "Igruhtheworld";
	char str1[10] = "#";

	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str1));
		
}*/
