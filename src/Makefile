# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 14:38:05 by ahiguera          #+#    #+#              #
#    Updated: 2023/11/24 12:46:24 by ahiguera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl

CFLAGS = -c -Wall -Wextra -Werror -D

all: $(NAME)

clean:
		rm -fm

$(NAME):
			gcc $(CFLAGS) $(NAME) get_next_line.c get_next_line_utils.c get_next_line.h \

re: clean all

.phony: all clean