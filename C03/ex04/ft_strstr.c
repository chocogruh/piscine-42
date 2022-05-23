/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:49:08 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/16 18:19:50 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == 0)
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*int main (int argc, char **argv)
{

    char *resultat;
    char *resultatstr;

    (void)  argc;

    printf("Source : %s\nTo find : %s\n", argv[1], argv[2]);
    resultat = ft_strstr(argv[1], argv[2]);
    printf("My result : %s\n", resultat);
    resultatstr = strstr(argv[1], argv[2]);
    printf("strstr : %s\n", resultatstr);
}*/