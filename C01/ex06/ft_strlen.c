/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:14:27 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/04 14:21:10 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

/*#include <stdio.h>
int	main(void)
{
	int result;

	result = ft_strlen("teste");
	printf("%d\n", result);
	return (0);
}*/
