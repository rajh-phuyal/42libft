/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:51:39 by rphuyal           #+#    #+#             */
/*   Updated: 2022/11/03 22:51:42 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = 0;
	if (size == 0)
		return (0);
	while (dest[dest_len])
		dest_len++;
	dest += dest_len;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (*src && i < size - dest_len - 1)
	{
		*(dest++) = *(src++);
		i++;
	}
	*dest = '\0';
	return (dest_len + src_len);
}
