/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nexus <nexus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:16:48 by nexus             #+#    #+#             */
/*   Updated: 2022/11/04 23:47:41 by nexus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  check_if_trimable(char const *str, char c)
{
    if ((c >= 9 && c <= 19) || c == 32)
        return (1);
    while (*str)
    {
        if (*str == c)
            return (1);
        str++;
    }
    return (0);
}

static void put_in_arr(char *arr, const char *src, int start, int end)
{
    int i;

    i = 0;
    while (start <= end)
        arr[i++] = src[start++];
    arr[i] = '\0';
}

char    *ft_strtrim(char const *str, char const *set)
{
    char    *newstr;
    int     start;
    int     end;

    start = 0;
    while (str[start] && check_if_trimable(set, str[start]))
        start++;
    end = ft_strlen(str) - 1;
    while (end > start && check_if_trimable(set, str[end]))
        end--;
    newstr = (char *)malloc(sizeof(char) * (end - start + 2));
    if (!newstr)
        return (0);
    put_in_arr(newstr, str, start, end);
    return (newstr);
}
