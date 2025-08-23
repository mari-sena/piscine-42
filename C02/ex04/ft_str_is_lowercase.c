/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:06:57 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/23 18:09:12 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (!str[0])
		return (1);
	while (str[i] != '\0')
	{
		if (96 < str[i] && str[i] < 123)
			result = 1;
		else
			return (0);
		i++;
	}
	return (result);
}
