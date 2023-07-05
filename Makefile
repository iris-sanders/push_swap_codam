# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: isanders <isanders@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/04/03 16:19:13 by isanders      #+#    #+#                  #
#    Updated: 2023/07/05 18:38:22 by lmuzio        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

HEADER = -I ./incl -I ./libft -I ./libft/ft_printf

OBJ_DIR = ./src/obj
SRC_DIR = ./src

SRC = 	main.c \
		input_check.c \
		create_list.c \
		utils.c \
		swap.c \
		push.c \
		rotate.c \
		reverse_rotate.c \
		sort.c \
		tests.c \
		
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

LIBFT = ./libft/libft.a
PRINTF = ./libft/ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(PRINTF)
	$(CC) $^ $(HEADER) $(CFLAGS) -o $(NAME)

$(PRINTF):
	make -C ./libft/ft_printf

$(LIBFT):
	make -C ./libft

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) -c $< $(HEADER) $(CFLAGS) -o $@ 

clean:
	rm -rf $(OBJ_DIR)
	$(MAKE) clean -C ./libft/ft_printf
	$(MAKE) clean -C ./libft

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C ./libft/ft_printf
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: all clean make fclean re