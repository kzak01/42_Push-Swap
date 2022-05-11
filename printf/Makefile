# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/05 12:34:29 by kzak              #+#    #+#              #
#    Updated: 2022/05/11 08:52:34 by kzak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

SRC =	ft_printf.c \
		ft_printf_utils.c \

CC = gcc

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "          - Generating $(NAME)..."
	@ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@echo "          - Compiling printf..."
	@gcc $(FLAGS) -c $(SRC)

clean:
	@echo "          - Removing printf object files..."
	@rm -f $(OBJ)

fclean: clean
	@echo "          - Removing $(NAME)..."
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
