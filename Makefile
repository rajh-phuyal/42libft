# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 16:15:26 by rphuyal           #+#    #+#              #
#    Updated: 2022/11/09 18:44:23 by rphuyal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I .

RM = rm -f

SRC    = ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c\
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_striteri.c \
		ft_split.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putendl_fd.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c\
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strmapi.c\
		ft_strdup.c \
		ft_split.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strjoin.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlcat.c 

OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew.c\
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

BONUS_OBJ = $(BONUS:.c=.o)

all:	$(NAME)

bonus:    $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

$(NAME):    $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ) $(BONUS_OBJ)

fclean:    clean
		$(RM) $(NAME)

re:	fclean $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)