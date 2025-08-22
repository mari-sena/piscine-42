/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianasena <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 16:06:30 by marianasena       #+#    #+#             */
/*   Updated: 2025/08/22 18:01:58 by marianasena      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (!str[0]) return 1;
	while (str[i] != '\0')
	{
		if ((64 < str[i] && str[i] < 91) || (96 < str[i] && str[i] < 123))
			result = 1;
		else
			return 0;
		i++;
	}
	return result;
}
