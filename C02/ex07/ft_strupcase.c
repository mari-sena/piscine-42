/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:22:33 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/26 08:45:15 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;
	char	*result;

	i = 0;
	while (str[i] != '\0')
	{
		if (96 < str[i] && str[i] < 123)
			result[i] = str[i] - 32;
		else
			result[i] = str[i];	
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	char	str[6] = "Teste";
	printf("%s", ft_strupcase(str));
	return (0);
}
