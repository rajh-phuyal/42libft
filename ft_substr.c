/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:59:20 by nexus             #+#    #+#             */
/*   Updated: 2022/11/09 15:41:22 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	int				index;
	unsigned int	slen;

	slen = (unsigned int)ft_strlen(s);
	if (start >= slen)
		substr = malloc(1);
	else if (len >= (size_t)slen)
		substr = (char *)malloc((slen - start) + 1);
	else
		substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr || !s)
		return (0);
	index = 0;
	if (start < slen)
	{
		while (len > 0 && s[start])
		{
			substr[index++] = s[start++];
			len--;
		}
	}
	substr[index] = '\0';
	return (substr);
}
