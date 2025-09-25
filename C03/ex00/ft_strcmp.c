/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:46:15 by marianasena       #+#    #+#             */
/*   Updated: 2025/09/25 19:42:26 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	aux;
	int	result;

	aux = 0;
	result = 0;
	while (s1[aux] != '\0' && s2[aux] != '\0' && result == 0)
	{
		if (s1[aux] != s2[aux])
			result =  s1[aux] - s2[aux];
		else
			aux++;
	}
	if (s2[aux] != '\0' && result == 0) return (-s2[aux]);
	if (s1[aux] != '\0' && result == 0) return (s1[aux]);
	return (result);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s1[6] = "maraa";
	char	s2[6] = "marpo";
	//char	s3[5] = "mari";
	//char	s4[5] = "mari";
	//char	dupTest[6] = "World";

	//printf("%s", strdup(dupTest));
	printf("Result: %d | Expected: -15\n", ft_strcmp(s1, s2));
	//printf("Result: %d | Expected: -14 ✅\n", ft_strcmp(s3, s4));
	//printf("%d", strcmp(s1, s2));
	return (0);
}*/
