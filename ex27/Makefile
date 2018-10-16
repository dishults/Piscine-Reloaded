# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshults <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 19:25:05 by dshults           #+#    #+#              #
#    Updated: 2017/11/08 19:25:06 by dshults          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

FILES = main.c

OBJECTS = main.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(FILES)
	$(CC) $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f main.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
