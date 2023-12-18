# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 00:24:48 by ijasinsk          #+#    #+#              #
#    Updated: 2023/12/13 14:02:08 by anyoksom         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	src/open_read_file.c \
		src/malloc_2d_array.c \
		src/nb_cols_and_rows.c \
		src/fill_tab.c \
		src/put_tab.c \
		src/algorithm_1.c \
		src/algorithm_2.c \
		src/error.c \
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CC	=	gcc

LDFLAGS	=	-lmy -L ./lib/

CFLAGS	=	-W -Wall -Wextra -Werror

CPPFLAGS	=	-I ./include

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	make -C lib/ clean
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	make -C lib/ fclean
	rm -f $(NAME)

re:	fclean	all
