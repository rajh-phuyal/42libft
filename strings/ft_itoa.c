/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:16:14 by rphuyal           #+#    #+#             */
/*   Updated: 2022/11/09 15:12:41 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		len;
	long	i;

	len = get_int_len(n);
	i = n;
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (!arr)
		return (NULL);
	*(arr + len) = '\0';
	if (i == 0)
		arr[0] = '0';
	else if (i < 0)
	{
		arr[0] = '-';
		i *= -1;
	}
	while (i)
	{
		arr[len - 1] = i % 10 + 48;
		len--;
		i = i / 10;
	}
	return (arr);
}
