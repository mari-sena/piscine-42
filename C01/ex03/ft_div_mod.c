/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:43:24 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/01 19:48:26 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int	main(void)
{
	int	a = 2;
	int	b = 3;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("div: %d\n", div);
	printf("mod: %d\n", mod);
	return (0);
}*/
