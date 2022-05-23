/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:55:32 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/13 12:28:54 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *des, char *src);

char	*ft_strcpy(char *des, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		des[i] = src[i];
		i++;
	}
	return (0);
}

/*int  main()
{
	char glass[50];

	char	bowl[] = "I am the source";
	ft_strcpy(glass, bowl);
	printf("%s\n", glass);
	return(0);

}*/
