/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:53:33 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/22 13:59:35 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", mod);
}
