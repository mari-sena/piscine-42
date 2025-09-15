/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:46:15 by marianasena       #+#    #+#             */
/*   Updated: 2025/09/15 20:59:09 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	aux;

	aux = 0;
	while (s1[aux] != '\0')
	{
	
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[6] = "maraa";
	char	s2[6] = "marpo";

	printf("Result: %d , Expected: -15\n", ft_strcmp("maraa", "marpo"));
	printf("Result: %d , Expected: -14", ft_strcmp("maria", "mario"));
	printf("%d", strcmp(s1, s2));
	return (0);
}
