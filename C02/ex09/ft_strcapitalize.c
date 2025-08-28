/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 21:31:35 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/27 22:34:55 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0
				|| str[i - 1] == ' '
				|| str[i - 1] == '-'
				|| str[i - 1] == '+'
			)
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i != 0)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int    main(void)
{
	char	phrase[57] = "Oi 42palavras Qta-E-Duas; Cin+E+Um";

        printf("%s", ft_strcapitalize(phrase));
	return(0);
}*/
