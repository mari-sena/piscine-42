/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:10:10 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/23 18:16:13 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (!str[0])
		return (1);
	while (str[i] != '\0')
	{
		if (64 < str[i] && str[i] < 91)
			result = 1;
		else
			return (0);
		i++;
	}
	return (result);
}
