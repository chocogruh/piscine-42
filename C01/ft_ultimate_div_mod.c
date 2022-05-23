/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:30:46 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/22 13:59:04 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	i;
	int	j;

	i = *a / *b;
	j = *a % *b;
	*a = i;
	*b = j;
}

/*int main()
{
	int a;
	int b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\t%d\n", a, b);
}*/
