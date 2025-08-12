/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:20:36 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/12 14:17:43 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	aux = 0;
	int	dgt = 1;
	int	dgt2 = 2;
	int	dgt3 = 3;
	int	comma = 44;
	int	space = 32;
	
	while(aux) {
		
	
		write(1, &dgt, 1);
		write(1, &dgt2, 1);
		write(1, &dgt3, 1);
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

int	main(void)
{
	ft_print_comb();
	return(0);
}
