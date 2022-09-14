# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 09:49:00 by kzak              #+#    #+#              #
#    Updated: 2022/09/14 15:18:28 by kzak             ###   ########.fr        #
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

LIBFT  = libft/libft.a

FLAGS = -Wall -Wextra -Werror

OBJ_DIR = obj

OBJ = $(SRC_MAIN:src/%.c=$(OBJ_DIR)/%.o)\
		$(SRC_PS:src/push_swap/%.c=$(OBJ_DIR)/push_swap/%.o)\
		$(SRC_MOVES:src/array_moves/%.c=$(OBJ_DIR)/array_moves/%.o)

all: $(NAME)

clean:
	@echo "     - Removing push_swap object files..."
	@rm -rf $(OBJ_DIR)
	@echo "          push_swap OBJ deleted"
	@make -C libft clean

fclean: clean
	@echo "     - Removing $(NAME)..."
	@rm -rf $(NAME)
	@echo "          $(NAME) OBJ deleted"
	@make -C libft fclean

re: fclean all

$(OBJ_DIR) :
	@mkdir $(OBJ_DIR)
	@mkdir obj/push_swap
	@mkdir obj/array_moves

$(OBJ_DIR)/%.o : src/%.c 
	@$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR)/push_swap/%.o : src/push_swap/%.c 
	@$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR)/array_moves/%.o : src/array_moves/%.c 
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJ)
	@echo "     - Making libft..."
	@make -s -C libft
	@echo "     - Making $(NAME)..."
	@gcc $(FLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	@echo "          $(NAME) created"
	@echo "     - Compiled -"

norm: 
	@norminette -R CheckForbiddenSourceHeader

.PHONY : all clean fclean re
