/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 22:36:39 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/31 19:17:43 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;

	if (size != 0)
	{
		i = 0;
		while(i + 1 < size && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}

/*#include <stdio.h>
int	main(void)
{
	char	dest[3];

	printf("%lu", strlcpy(dest, "1", 3));
	return (0);
}*/
