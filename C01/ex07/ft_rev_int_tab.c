/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:22:23 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/05 10:51:53 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	newArr[size];

	i = size;
	while (i == 0)
	{
		newArr[i] = tab[i];
		i--;
	}
}

int	main(void)
{
	int	tab[4];

	tab[4] = {1, 2, 3};
	ft_rev_int_tab(&tab, 4);
	return (0);
}
