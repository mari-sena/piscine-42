/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:22:23 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/10 17:36:12 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = size;
	temp = *tab;
	while (i >= 0)
	{
		temp += tab[i];
		i--;
	}
	tab = temp;
}

/*
int	main(void)
{
	int	tab[4] = {1, 2, 3, 4};

	ft_rev_int_tab(tab, 4);
	return (0);
}*/
