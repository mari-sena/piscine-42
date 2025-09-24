/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:46:15 by marianasena       #+#    #+#             */
/*   Updated: 2025/09/24 14:40:40 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strsize(char str)
{
	str
}

int	ft_strcmp(char *s1, char *s2)
{
	int	aux;
	int	result;
	int	s1size;
	int	s2size;

	aux = 0;
	result = 0;
	s1size = ft_strsize(s1);
	s2size = ft_strsize(s2);
	while (s1[aux] != '\0' && result == 0)
	{
		result =  s1[aux] - s2[aux];
		aux++;
	}
	if (s2[aux] != '\0')
		return (-s2[aux]);
	return (result);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[6] = "maraa";
	char	s2[6] = "marpo";
	char	s3[6] = "mari";
	char	s4[6] = "mari";

	printf("Result: %d | Expected: -15\n", ft_strcmp(s1, s2));
	//printf("Result: %d | Expected: -14 ✅\n", ft_strcmp(s3, s4));
	//printf("%d", strcmp(s1, s2));
	return (0);
}*/
