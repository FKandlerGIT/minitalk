# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkandler <fkandler@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 19:31:47 by fkandler          #+#    #+#              #
#    Updated: 2024/03/14 17:49:09 by fkandler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
CLIENT = client
SERVER = server

LIBFTPRINTF = libftprintf.a
LIBFTPRINTF_DIR = libftprintf

CFILES = client.c server.c 
INCLUDES = minitalk.h

OBJ = $(CFILES:.c=.o)


CC = gcc
CFLAGS = #-Wall -Wextra -Werror

CFILES = ft_client.c ft_server.c 
PRINTF = print_char.c print_digit.c print_str.c ft_printf.c print_format.c print_percent_sign.c print_ptr.c
OBJ = $(CFILES:.c=.o)

NAME = minitalk.a

all: $(NAME)

$(NAME): $(OBJ) 
	ar rcs $(NAME) libft/libft.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
test: $(NAME)
	$(CC) $(CFLAGS) ft_client.c $(PRINTF) -o $(CLIENT)
	$(CC) $(CFLAGS) ft_server.c $(PRINTF) -o $(SERVER)
	
