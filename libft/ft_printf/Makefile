# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: isanders <isanders@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/12/06 12:53:52 by isanders      #+#    #+#                  #
#    Updated: 2023/03/28 12:25:56 by isanders      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = 	ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \

OFILES = $(SRC:.c=.o)
HEADER = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(NAME)

$(NAME): $(OFILES) $(HEADER)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean make fclean re