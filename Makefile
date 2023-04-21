# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: isanders <isanders@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/04/03 16:19:13 by isanders      #+#    #+#                  #
#    Updated: 2023/04/21 16:17:37 by isanders      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = 	main.c \
		input_check.c \
		create_list.c \
		tester.c \
		push_swap_utils.c \
		
HEADER = -I ./libft/libft.h -I ./libft/ft_printf/ft_printf.h

OFILES = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc

LIBFT = ./libft/libft.a
PRINTF = ./libft/ft_printf/libftprintf.a

all: $(NAME)

make comp: all clean

$(NAME): $(OFILES)
	$(MAKE) -C ./libft
	$(MAKE) -C ./libft/ft_printf
	$(CC) $(OFILES) $(HEADER) $(PRINTF) $(LIBFT) $(CFLAGS) -o $(NAME) 

clean:
	rm -rf $(OFILES)
	$(MAKE) clean -C ./libft/ft_printf
	$(MAKE) clean -C ./libft

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C ./libft/ft_printf
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: all clean make fclean re