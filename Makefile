# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 18:51:21 by tevers            #+#    #+#              #
#    Updated: 2023/07/17 03:31:15 by tevers           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = .
OBJ_DIR = obj
INC_DIR = include
LIBFT_DIR = libft
OP_DIR = operations

# Source files and object files
MAIN_SRC = $(SRC_DIR)/main.c
OP_SRCS = $(wildcard $(OP_DIR)/*.c)
OBJS = $(MAIN_SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o) $(OP_SRCS:$(OP_DIR)/%.c=$(OBJ_DIR)/%.o)

# Libraries
LIBFT = $(LIBFT_DIR)/libft.a

# Final executable
NAME = pushswap

# Targets
all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) -I$(INC_DIR) -L$(LIBFT_DIR) $(OBJS) -lft -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR)/%.o: $(OP_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re