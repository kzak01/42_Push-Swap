# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 11:10:21 by kzak              #+#    #+#              #
#    Updated: 2022/06/14 12:14:52 by kzak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

AR = ar
ARFLAGS = crs

CC = gcc
CFLAGS = -Wall -Wextra -Werror

ifneq ($(DEBUG),true)
	CFLAGS = -O3
endif
ifeq ($(DEBUG),true)
	CDEBUG = -g
endif

RM = rm
RMFLAGS = -f

INC_DIR = include
SRC_DIR = src
OBJ_DIR = obj

HEADERS = $(addprefix $(INC_DIR)/, \
	libft.h	\
	ft_printf.h \
	get_next_line.h \
)

SRC_LST_DIR = $(SRC_DIR)/lst
SRC_LST = $(addprefix $(SRC_LST_DIR)/, \
	ft_lstadd_back.c	\
	ft_lstadd_front.c	\
	ft_lstclear.c	\
	ft_lstdelone.c	\
	ft_lstiter.c	\
	ft_lstlast.c	\
	ft_lstmap.c	\
	ft_lstnew.c	\
	ft_lstsize.c	\
)

SRC_MEMORY_DIR = $(SRC_DIR)/memory
SRC_MEMORY = $(addprefix $(SRC_MEMORY_DIR)/, \
	ft_bzero.c	\
	ft_calloc.c	\
	ft_malloc.c	\
	ft_memchr.c	\
	ft_memcmp.c	\
	ft_memcpy.c	\
	ft_memmove.c	\
	ft_memset.c	\
)

SRC_STRING_DIR = $(SRC_DIR)/string
SRC_STRING = $(addprefix $(SRC_STRING_DIR)/, \
	ft_atoi.c	\
	ft_itoa.c	\
	ft_split.c	\
	ft_strchr.c	\
	ft_strcmp.c	\
	ft_strdup.c	\
	ft_strjoin_free.c	\
	ft_strjoin.c	\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c	\
	ft_strmapi.c	\
	ft_strncmp.c	\
	ft_strndup.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_strtrim.c	\
	ft_substr.c	\
	ft_striteri.c	\
)

SRC_TYPE_DIR = $(SRC_DIR)/type
SRC_TYPE = $(addprefix $(SRC_TYPE_DIR)/, \
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_tolower.c	\
	ft_toupper.c	\
)

SRC_WRITE_DIR = $(SRC_DIR)/write
SRC_WRITE = $(addprefix $(SRC_WRITE_DIR)/, \
	ft_putchar_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_putstr_fd.c	\
)

SRC_PRINTF_DIR = $(SRC_DIR)/printf
SRC_PRINTF = $(addprefix $(SRC_PRINTF_DIR)/, \
	ft_printf_utils.c	\
	ft_printf.c	\
)

SRC_GNL_DIR = $(SRC_DIR)/gnl
SRC_GNL = $(addprefix $(SRC_GNL_DIR)/, \
	get_next_line.c	\
)

SRCS = \
	$(SRC_LST)	\
	$(SRC_MEMORY)	\
	$(SRC_STRING)	\
	$(SRC_TYPE)	\
	$(SRC_WRITE)	\
	$(SRC_PRINTF)	\
	$(SRC_GNL)	\

vpath %.c \
	$(SRC_DIR)	\
	$(SRC_LST_DIR)	\
	$(SRC_MEMORY_DIR)	\
	$(SRC_STRING_DIR)	\
	$(SRC_TYPE_DIR)	\
	$(SRC_WRITE_DIR)	\
	$(SRC_PRINTF_DIR)	\
	$(SRC_GNL_DIR)	\

OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))

NO_COLOR = \e[0m

LF = \e[1K\r$(NO_COLOR)

all : $(NAME)

clean :
	@$(RM) $(RMFLAGS) $(OBJS) $(OBJS_BONUS)
	@printf "🧹 Cleaning $(NAME)'s Object files...\n"

fclean : clean
	@$(RM) $(RMFLAGS) $(NAME)
	@printf "🧹 Cleaning $(NAME)\n"

re : fclean all

$(OBJ_DIR)/%.o : %.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CDEBUG) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	@printf "$(LF)🚧 Create $@ from $<"
	
$(NAME) : $(HEADERS) $(OBJS)
	@printf "\n🚀 Successfully Created $(NAME)'s Object files !\n"
	@printf "📚 Create! $@\n"
	@$(AR) $(ARFLAGS) $@ $(OBJS)
	@printf "$(LF)🎉 Successfully Created $@ !\n"

.PHONY: all clean fclean re
