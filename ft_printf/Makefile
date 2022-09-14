# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/05 12:34:29 by kzak              #+#    #+#              #
#    Updated: 2022/09/14 11:16:44 by kzak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c \
		ft_printf_utils.c \

CC = gcc

HEADER := ft_printf.h

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "          $(NAME) created"
	@ranlib $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "          OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "          $(NAME) deleted"

re : fclean all

.PHONY : all clean fclean re
