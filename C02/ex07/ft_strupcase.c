/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:22:33 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/27 21:13:55 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (96 < str[i] && str[i] < 123)
			str[i] -= 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[6] = "Teste";
	printf("%s", ft_strupcase(str));
	return (0);
}*/
