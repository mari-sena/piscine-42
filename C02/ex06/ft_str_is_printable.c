/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:17:32 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/23 18:21:36 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (!str[0])
		return (1);
	while (str[i] != '\0')
	{
		if (31 < str[i] && str[i] < 127)
			result = 1;
		else
			return (0);
		i++;
	}
	return (result);
}
