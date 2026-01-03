/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 20:24:39 by marianasena       #+#    #+#             */
/*   Updated: 2025/10/03 20:31:35 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char*	result = '';
	int		aux = 0;

	while (dest[aux] != '\0') {
		aux++;
		result += dest[aux];
	}
	aux = 0;
	while (src[aux] != '\0') {
		aux++;
		result += src[aux];
	}
	return (result);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[6] = "mari";
	char	s2[5] = "ana";

	// printf("%s", strcat(s1, s2));
	printf("%s", ft_strcat(s1, s2));
	return (0);
}
