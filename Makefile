# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 09:13:08 by kzak              #+#    #+#              #
#    Updated: 2022/05/06 11:21:13 by kzak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = $(SRC_MAIN) $(SRC_UTILS)

SRC_MAIN = main.c

CC = gcc
FLAGS = -Wall -Wextra -Werror

HEADER = push_swap.h

LIBFT_A = libft.a
LIBFT_DIR = libft/
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_A))

PRINTF_A = ft_printf.a
PRINTF_DIR = printf/
FT_PRINTF = $(addprefix $(PRINTF_DIR), $(PRINTF_A))

UTILS = 3case.c \
			errors.c \
			swap.c \
			rotate.c \
			reverse_rotate.c \
			push.c \
			5case.c \
			moves.c \

SRC_UTILS = $(addprefix utils/, $(UTILS))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	@echo "     - Making libft..."
	@make -C $(LIBFT_DIR)
	@echo "     - Making ft_printf..."
	@make -C $(PRINTF_DIR)
	@echo "     - Compiling $(NAME)..."
	@gcc $(FLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	@echo "     - Compiled -"

%.o:	%.c Makefile $(HEADER)
	@$(CC) $(FLAGS) -c $< -o $@

exe: re
	@make -C ./ clean
	@echo "     - Executing $(NAME)... \n"
	@./$(NAME) $(m)
	@echo "\n     - Done -"

clean:
	@echo "     - Removing object files..."
	@rm -rf $(OBJ)
	@make -C $(LIBFT_DIR) clean
	@make -C $(PRINTF_DIR) clean

fclean: clean
	@echo "     - Removing $(NAME)..."
	@rm -rf $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@make -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re