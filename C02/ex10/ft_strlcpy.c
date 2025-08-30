/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 22:36:39 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/29 19:45:30 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return i + 1;
}

/*#include <stdio.h>
int	main(void)
{
	char	dest[3];

	printf("%lu", strlcpy(dest, "1", 3));
	return (0);
}*/
