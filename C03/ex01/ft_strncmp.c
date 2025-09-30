/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:45:04 by marianasena       #+#    #+#             */
/*   Updated: 2025/09/30 20:23:39 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	aux;
	char		result;

	aux = 0;
	result = 0;
	while (result == 0 && aux < n)
	{
		if (s1[aux] != s2[aux])
		{
			result = s1[aux] - s2[aux];
		}
		else
		{
			aux++;
		}
	}
	return (result);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[5] = "mari";
	char	s2[5] = "mare";

	printf("%d \n", strncmp(s1, s2, 4));
	return (0);
}*/
