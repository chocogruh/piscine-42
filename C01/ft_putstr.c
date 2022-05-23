/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:25:49 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/22 13:53:18 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*carac;

	carac = str;
	while (*carac != '\0')
	{
		write(1, carac, 1);
		carac++;
	}
}

/*int main()
{
	char	str[] = "complicated to understand";
	char	*gruh;

	gruh = str;
	ft_putstr(gruh);
}*/
