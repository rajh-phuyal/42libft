/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:52:59 by rphuyal           #+#    #+#             */
/*   Updated: 2022/11/08 20:21:36 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t max)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!s2[i] || !s2[i])
		return ((char *)s1);
	while (s1[i] && i < max)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s2[j] && i + j < max)
			{
				if (s2[j] == s1[i + j])
					j++;
				else
					break ;
			}
			if (s2[j] == '\0')
				return ((char *)(s1 + i));
		}
		i++;
	}
	return (0);
}
