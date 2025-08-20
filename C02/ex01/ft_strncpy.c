/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:55:44 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/20 15:06:34 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// N é a quantidade de caracteres que devem ser copiados em dest
// Se src tem um length menor que N, só será copiado em dest apenas a quantidade descrita em N

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		if (i <= n)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return dest;
}

#include <stdio.h>
int	main(void)
{
	char	dest[8] = "Mariono";
	printf("%s", ft_strncpy("Mariana", dest, 5));
	return(0);
}
