# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 13:40:25 by fgata-va          #+#    #+#              #
#    Updated: 2020/02/17 12:01:57 by fgata-va         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS += -Wall -Werror -Wextra

LIBOBJS = Libft/*.o

SRC = ft_printf.c ft_chars_strings.c ft_integers.c ft_printf_utils_1.c ft_hexadecimal.c ft_unsigned.c ft_pointers.c ft_printf_utils_2.c

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

lib:
		@$(MAKE) -C Libft all
$(NAME): lib
		@$(CC) $(CFLAGS) -c $(SRC)
		@ar rc $(NAME) $(OBJ) $(LIBOBJS)

all: $(NAME)

clean: 
		@rm -f $(OBJ)
		@$(MAKE) -C Libft clean

# Regla para compilar con programa con un main
own_test:
	$(CC) $(CFLAGS) -g -I./ $(SRC) main.c Libft/*.c

fclean: clean
		@rm -f $(NAME)
		@$(MAKE) -C Libft fclean

re: fclean all

all: $(NAME)
