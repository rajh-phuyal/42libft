/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:07:23 by nexus             #+#    #+#             */
/*   Updated: 2022/12/10 21:30:37 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* a simple function that puts the given char in the given fd*/
void	ft_putchar_fd(char c, int fd)
{
	if (c < 0)
		return ;
	write(fd, &c, 1);
}
