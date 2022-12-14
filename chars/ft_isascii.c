/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:16:02 by rphuyal           #+#    #+#             */
/*   Updated: 2022/12/10 21:28:34 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks weather a given char is ASCII value*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
