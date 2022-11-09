# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rphuyal <rphuyal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 16:15:26 by rphuyal           #+#    #+#              #
#    Updated: 2022/11/09 18:01:26 by rphuyal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I .

RM = rm -f

SRC = ft_isalnum.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_putchar_fd.c \
		ft_split.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_substr.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_itoa.c \
		ft_memcpy.c \
		ft_putendl_fd.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_putnbr_fd.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_isdigit.c \
		ft_memchr.c \
		ft_memset.c \
		ft_putstr_fd.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c

OBJ = $(SRC:.c=.o)

BONUS = $(wildcard *.c)

BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus:	$(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

so:
	$(cc) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
