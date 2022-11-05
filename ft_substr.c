/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nexus <nexus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:59:20 by nexus             #+#    #+#             */
/*   Updated: 2022/11/04 15:53:23 by nexus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    int     index;

    index = 0;
    len = (len > INT_MAX) ? (size_t)ft_strlen(s) : len;
    substr = (char *)malloc(sizeof(char) * len + 1);
    if (!substr)
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