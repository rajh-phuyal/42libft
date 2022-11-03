/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:15:19 by rphuyal           #+#    #+#             */
/*   Updated: 2022/11/02 20:27:47 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int 	ft_isprint(int c);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
int		ft_strlen(const char *str);
char    *ft_itoa(int n);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcat(char *dest, char *src, size_t size);
void   	ft_bzero(void *s, size_t n);
void 	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif 
