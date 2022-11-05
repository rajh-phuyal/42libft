/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nexus <nexus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:57:04 by nexus             #+#    #+#             */
/*   Updated: 2022/11/04 16:14:47 by nexus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *newstr;
    int     index;

    newstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!newstr)
        return (0);
    index = 0;
    while (*s1)
        newstr[index++] = *(s1++);
    while (*s2)
        newstr[index++] = *(s2++);
    newstr[index] = '\0';
    return (newstr);
}