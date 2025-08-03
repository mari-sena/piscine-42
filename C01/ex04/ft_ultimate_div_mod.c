/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:49:47 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/03 16:19:53 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *a / *b;
	*b = aux % *b;
}

/*#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 8;
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	return(0);
}*/
