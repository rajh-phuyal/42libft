/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:19:41 by rphuyal           #+#    #+#             */
/*   Updated: 2022/11/03 23:00:02 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*alloc;

	alloc = (void *)malloc(nitems * size);
	if (!alloc)
		return (0);
	ft_bzero(alloc, nitems * size);
	return (alloc);
}
