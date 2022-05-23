/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:03:25 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/20 18:51:33 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

char	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int	main(int argc, char **argv)
{
	char	s;
	int		i;
	int		j;

	(void) argc;
	i = argc - 1;

	/*while(i > 0)
	{
		if (ft_check (argv[i], argv[i++]) < ft_check(argv[i], argv[i++]))
		{
			
		}
	}*/
}
