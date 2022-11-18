# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsemke <fsemke@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 16:45:18 by fsemke            #+#    #+#              #
#    Updated: 2022/02/04 14:51:44 by fsemke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIB = libft.a

SRC = 	ft_printf.c	\
		./srcs/ft_cases.c \
		./srcs/ft_helpfunctions.c \
		./srcs/ft_struct.c \
		./srcs/ft_hex.c \
		./srcs/ft_num.c

OBJ = $(SRC:.c=.o)

HEADER =	./includes

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

bonus: all

$(LIB):
	make -C ./libft/ $(LIB)
	cp ./libft/$(LIB) .

$(NAME): $(OBJ) $(LIB)
	mv $(LIB) $(NAME)
	ar -rcs $(NAME) $(OBJ)

clean:
	make clean -C libft
	rm -f $(OBJ)
	rm -f libft.a

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all