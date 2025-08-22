/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:55:44 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/22 16:05:16 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while(dest[i] != '\0')
	{
		if (i < n)
			dest[i] = src[i];
		else
			dest[i] = dest[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest[7] = "Worldl1";
	printf("%s", ft_strncpy(dest, "Hello", 3));
	//printf("%s", strncpy(dest, "Hello", 3));
	return(0);
}*/
