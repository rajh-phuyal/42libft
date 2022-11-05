/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nexus <nexus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:49:38 by nexus             #+#    #+#             */
/*   Updated: 2022/11/05 00:00:50 by nexus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *newstr;
    int     index;

    newstr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!newstr)
        return (0);
    index = 0;
    while (s[index])
    {
        newstr[index] = f(index, s[index]);
        index++;
    }
    newstr[index] = '\0';
    return (newstr);
}