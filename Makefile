# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dseraki <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/20 07:06:18 by dseraki           #+#    #+#              #
#    Updated: 2017/12/20 07:21:53 by dseraki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCSPATH = ./

HEADER = ./includes

SRCS = ft_atoi.c ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_itoa.c ft_memalloc.c ft_memcmp.c ft_memccpy.c ft_memcpy.c \
	  ft_memchr.c ft_memdel.c ft_putchar.c ft_putchar_fd.c ft_memset.c ft_putendl.c \
	  ft_memmove.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
	  ft_strclr.c ft_strcmp.c ft_strcat.c ft_strdel.c ft_strchr.c ft_strcpy.c \
	  ft_strequ.c ft_striter.c ft_strdup.c ft_striteri.c ft_strlen.c ft_strmapi.c \
	  ft_strjoin.c ft_strlcat.c ft_strncat.c ft_strmap.c ft_strncmp.c ft_strnew.c \
	  ft_strncpy.c ft_strnequ.c ft_strsplit.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
	  ft_toupper.c ft_strstr.c ft_strsub.c ft_strtrim.c

OBJ = $(SRCS:.c=.o)

FLAGS +=  -Wall -Wextra -Werror

FSRCS =$(addprefix $(SRCPATH), $(SRCS))

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(FSRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
