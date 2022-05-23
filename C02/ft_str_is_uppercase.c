/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:08:53 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/13 16:15:34 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int main ()
{
	char str[10] = "";
	char str1[10] = "BOUH";

	printf("%d\n", ft_str_is_uppercase(str));
	printf("%d\n", ft_str_is_uppercase(str1));

}*/
