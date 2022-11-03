/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:54:48 by rphuyal           #+#    #+#             */
/*   Updated: 2022/11/03 22:41:02 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	result;
	size_t	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] && ((str[i] >= 9 && str[i] <= 19) || str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		result = (result * 10) + (str[i++] - 48);
	if (i > 19 || result >= ULLONG_MAX)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (result * sign);
}
