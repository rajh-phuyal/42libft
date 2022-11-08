/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:59:20 by nexus             #+#    #+#             */
/*   Updated: 2022/11/08 21:09:47 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		index;

	index = 0;
	if (len > INT_MAX)
		len = (size_t)ft_strlen(s);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr || !s)
		return (0);
	if (start >= (unsigned int)ft_strlen(s))
	{
		substr[index] = '\0';
		return (substr);
	}
	while (len > 0 && s[start])
	{
		substr[index++] = s[start++];
		len--;
	}
	substr[index] = '\0';
	return (substr);
}
