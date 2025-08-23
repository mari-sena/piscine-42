/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 18:03:08 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/23 17:47:45 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	if (!str[0])
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (47 < str[i] && str[i] < 58)
			result = 1;
		else
			return (0);
		i++;
	}
	return (result);
}
