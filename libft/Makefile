# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: isanders <isanders@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/31 12:59:16 by isanders      #+#    #+#                  #
#    Updated: 2023/04/12 15:29:29 by isanders      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_tolower.c ft_toupper.c ft_memmove.c ft_bzero.c ft_isalnum.c \
ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c \
ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strnstr.c ft_strmapi.c \
ft_striteri.c ft_putnbr_fd.c ft_itoa.c ft_split.c\

OFILES = $(SRC:.c=.o)
HEADER = libft.h
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