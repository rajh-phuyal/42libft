/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:01:17 by rphuyal           #+#    #+#             */
/*   Updated: 2022/11/09 15:14:04 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *m1, const void *m2, size_t n)
{
	size_t	i;

	i = 0;
	if (m1 == m2)
		return (0);
	while (i < n)
	{
		if (*(unsigned char *)(m1 + i) != *(unsigned char *)(m2 + i))
			return (*(unsigned char *)(m1 + i) - *(unsigned char *)(m2 + i));
		i++;
	}
	return (0);
}
