/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 00:18:08 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/02 11:41:42 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	c = '0';

	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}

/*
 int main()
 {
    ft_print_numbers();
    return(0);
 */
