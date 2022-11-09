/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:52:59 by rphuyal           #+#    #+#             */
/*   Updated: 2022/11/09 15:11:59 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t max)
{
	size_t	i;
	size_t	j;

	if (!s2[0])
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < max)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s2[j] && i + j < max && s2[j] == s1[i + j])
				j++;
			if (s2[j] == '\0')
				return ((char *)(s1 + i));
		}
		i++;
	}
	return (0);
}
