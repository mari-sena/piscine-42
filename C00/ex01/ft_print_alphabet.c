/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:48:14 by marianasena       #+#    #+#             */
/*   Updated: 2025/07/31 15:34:05 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}

/*int	main()
{
	ft_print_alphabet();
	return(0);
}*/
