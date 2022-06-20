# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 09:49:00 by kzak              #+#    #+#              #
#    Updated: 2022/06/20 10:37:17 by kzak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP = push_swap
NAME = $(PUSH_SWAP)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

ifeq ($(DEBUG),true)
	CFLAGS += -g
endif

RM = rm
RMFLAGS = -rf

H_DIR = h_file
SRC_DIR = src
OBJ_DIR = obj
CFLAGS += -I $(H_DIR)

LIBFT = libft.a
LIBFT_DIR = libft
LIBFT_FILE = $(LIBFT_DIR)/$(LIBFT)
LIBFT_INC_DIR = $(LIBFT_DIR)/include
LIBFT_FLAGS = -L./$(LIBFT_DIR) -lft
CFLAGS += -I $(LIBFT_INC_DIR)

PUSH_SWAP_DIR = $(SRC_DIR)/push_swap
PUSH_SWAP_SRCS = $(wildcard $(PUSH_SWAP_DIR)/*.c)

MOVES_DIR = $(SRC_DIR)/array_moves
MOVES_SRCS = $(wildcard $(MOVES_DIR)/*.c)

HEADERS = $(wildcard $(H_DIR)/*.h)

PUSH_SWAP_SRCS += $(MOVES_SRCS)

vpath %.c \
	$(SRC_DIR) \
	$(PUSH_SWAP_DIR)	\
	$(MOVES_DIR)	\

PUSH_SWAP_OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(PUSH_SWAP_SRCS:.c=.o)))

LF = \e[1K\r$(NO_COLOR)

NO_COLOR = \e[0m

all : $(NAME)

clean :
	@$(RM) $(RMFLAGS) $(OBJ_DIR)
	@printf "👻 Cleaning $(NAME)'s Object files...\n"

fclean : clean
	@$(RM) $(RMFLAGS) $(NAME)
	@printf "🎃 Cleaning $(NAME)\n"
	@printf "👾 GG 🕹\n"

re : fclean all

$(OBJ_DIR) :
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.c $(LIBFT_FILE) | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(LF)👍 Create $@ from $<"


$(PUSH_SWAP) : $(LIBFT_FILE) $(HEADERS) $(PUSH_SWAP_OBJS) $(SRC_DIR)/push_swap.c
	@printf "\n🌙 Successfully Created $@'s Object files!\n"
	@printf "♈︎ Create $@!\n"
	@$(CC) $(CFLAGS) $(LIBFT_FLAGS) $(PUSH_SWAP_OBJS) $(SRC_DIR)/push_swap.c -o $@
	@printf "$(LF)😎 Successfully Created $@ !\n$(NO_COLOR)"
	@printf "🍀 GLHF 👾\n"

norm: 
	@norminette -R CheckForbiddenSourceHeader

$(LIBFT) : $(LIBFT_FILE)

$(LIBFT_FILE) :
	@make --no-print-directory -C $(LIBFT_DIR)

$(LIBFT)_clean :
	@make --no-print-directory -C $(LIBFT_DIR) clean

$(LIBFT)_fclean :
	@make --no-print-directory -C $(LIBFT_DIR) fclean


.PHONY: all clean fclean re test \
	$(LIBFT) $(LIBFT)_clean $(LIBFT)_fclean
