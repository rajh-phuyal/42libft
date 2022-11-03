/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:23:48 by rphuyal           #+#    #+#             */
/*   Updated: 2022/11/03 23:09:23 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(char c, char *s)
{
	int	len;

	len = 1;
	while (*s)
	{
		if (*s != c)
			s++;
		else
		{
			while (*s == c)
				s++;
			len++;
		}
	}
	return (len);
}

char	*word_dup(char *s, int start, int end, int len)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * len + 1);
	while (start < end)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		end;
	int		index_split;

	split = (char **)malloc(sizeof(char *) * get_length(c, (char *)s) + 1);
	if (!split || !s)
		return (0);
	i = 0;
	index_split = 0;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			end = i;
			while (s[end] && s[end] != c)
				end++;
			split[index_split++] = word_dup((char *)s, i, end, end - i);
			i = end;
		}
		else
			i++;
	}
	split[index_split] = '\0';
	return (split);
}
