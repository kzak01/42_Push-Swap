# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 09:49:00 by kzak              #+#    #+#              #
#    Updated: 2022/09/14 12:03:50 by kzak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_MAIN = src/push_swap.c

SRC_PS = src/push_swap/errors.c \
			src/push_swap/find_pivot.c \
			src/push_swap/infinity.c \
			src/push_swap/push_to_b.c \
			src/push_swap/small_case.c \
			src/push_swap/sort_b.c \
			src/push_swap/utils_2.c \
			src/push_swap/varius_sort.c \

SRC_MOVES = src/array_moves/k_stack.c \
				src/array_moves/push.c \
				src/array_moves/reverse_rotate.c \
				src/array_moves/rotate.c \
				src/array_moves/swap.c \
				src/array_moves/utils.c \

SRC = $(SRC_MAIN) $(SRC_PS) $(SRC_MOVES)

LIBFT  = libft/libft.a

FT_PRINTF = ft_printf/libftprintf.a

FLAGS = -Wall -Wextra -Werror

OBJ_DIR = obj

OBJ = $(SRC_MAIN:src/%.c=$(OBJ_DIR)/%.o)\
		$(SRC_PS:src/push_swap/%.c=$(OBJ_DIR)/push_swap/%.o)\
		$(SRC_MOVES:src/array_moves/%.c=$(OBJ_DIR)/array_moves/%.o)

all: $(NAME)

clean:
	@echo "     - Removing object files..."
	@rm -rf $(OBJ_DIR)
	@make -C libft clean
	@make -C ft_printf clean

fclean: clean
	@echo "     - Removing $(NAME)..."
	@rm -rf $(NAME)
	@make -C libft fclean
	@make -C ft_printf fclean

re: fclean all

$(OBJ_DIR) :
	@mkdir $(OBJ_DIR)
	@mkdir obj/push_swap
	@mkdir obj/array_moves

$(OBJ_DIR)/%.o : src/%.c 
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/push_swap/%.o : src/push_swap/%.c 
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/array_moves/%.o : src/array_moves/%.c 
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJ)
	@echo "     - Making libft..."
	@make -s -C libft
	@echo "     - Making ft_printf..."
	@make -s -C ft_printf
	@echo "     - Compiling $(NAME)..."
	@gcc $(FLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	@echo "     - Compiled -"

norm: 
	@norminette -R CheckForbiddenSourceHeader

exe: re
	@make -C ./ clean
	@echo "     - Executing $(NAME)... \n"
	@./$(NAME) $(m)
	@echo "\n     - Done -"


.PHONY : all clean fclean re
