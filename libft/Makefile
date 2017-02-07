# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/17 21:11:30 by nlowe             #+#    #+#              #
#    Updated: 2017/02/05 16:40:19 by nlowe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = src
SRC_NAME = ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isspace.c \
			ft_itoa.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strfchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strndup.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsep.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_puterr.c

OBJ_PATH = obj
OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

CC = gcc
CFLAGS  = -Werror -Wall -Wextra
IFLAGS = -Iincludes

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $(OBJ)
	@ranlib $@

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $^

clean:
	@rm -rf $(OBJ)
	@rm -d -rf $(OBJ_PATH)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONYL: all, clean, fclean, re
