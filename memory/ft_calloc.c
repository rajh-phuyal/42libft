/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:19:41 by rphuyal           #+#    #+#             */
/*   Updated: 2022/12/10 21:33:37 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reallocated a memory block based on given params,
and null terminates the whole block*/
void	*ft_calloc(size_t nitems, size_t size)
{
	void	*alloc;

	alloc = (void *)malloc(nitems * size);
	if (!alloc)
		return (0);
	ft_bzero(alloc, nitems * size);
	return (alloc);
}
