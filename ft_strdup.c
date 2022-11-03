/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:43:34 by rphuyal           #+#    #+#             */
/*   Updated: 2022/11/03 22:41:45 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	int		str_len;
	int		index;

	index = 0;
	str_len = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * str_len + 1);
	if (!newstr)
		return (0);
	while (s[index])
	{
		newstr[index] = s[index];
		index++;
	}
	newstr[index] = '\0';
	return (newstr);
}
