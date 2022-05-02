# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 11:10:21 by kzak              #+#    #+#              #
#    Updated: 2022/04/20 09:09:48 by kzak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

CC = gcc

SRC = *.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "          - Generating $(NAME)..."
	@ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@echo "          - Compiling libft..."
	@gcc $(FLAGS) -c $(SRC)

norm:
	@norminette $(SRC) libft.h

clean:
	@echo "          - Removing libft object files"... 
	@rm -f $(OBJ)

fclean: clean
	@echo "          - Removing $(NAME)..."
	@rm -f $(NAME)

re: fclean all

.PHONY: bonus, all, clean, fclean, re
