# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaelee <jaelee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/04 00:44:52 by jaelee            #+#    #+#              #
#    Updated: 2020/02/12 15:47:44 by seoh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = jaelee.filler
SRCS = main.c \
	   parser.c \
	   parser_util.c \
	   init_nmap.c \
	   process_nmap.c \
	   filler.c \
	   free_and_error.c
INCLUDES = ./includes/filler.h \
		./libft/includes/libft.h
OBJS = $(patsubst %.c,obj/%.o,$(SRCS))
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
INCLUDE_FOLDERS = -I./includes -I./libft/includes
LIBRARY_PATH = -Llibft

.PHONY: clean fclean re
.SUFFIXES: .c .o

all: $(NAME)

$(NAME): $(OBJS) libft/libft.a
	$(CC) $(CFLAGS) $(INCLUDE_FOLDERS) $(LIBRARY_PATH) -lft $(OBJS) -o $@

obj:
	mkdir -p obj

obj/%.o : src/%.c $(INCLUDES) | obj
	$(CC) $(CFLAGS) $(INCLUDE_FOLDERS) -c $< -o $@

libft/libft.a: libft/includes/libft.h
	make -C libft

clean:
	make -C libft clean
	rm -f $(OBJS)
	rm -rf obj

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean
	make all
