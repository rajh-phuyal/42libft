/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:26:18 by rphuyal           #+#    #+#             */
/*   Updated: 2022/11/03 22:48:09 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (*src && i < (size - 1))
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	return (length);
}
