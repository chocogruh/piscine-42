/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:43:10 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/23 19:33:02 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		else if (str[i] == str[0] && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		else if (str[i - 1] >= 0 && str[i - 1] <= 47
			&& str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main ()
{
	char	str[500] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}*/
