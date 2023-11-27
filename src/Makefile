# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 14:38:05 by ahiguera          #+#    #+#              #
#    Updated: 2023/11/27 15:55:18 by ahiguera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl

CFLAGS = -Wall -Wextra -Werror -D

all: $(NAME)

clean:
		rm -f
fclean:
		rm -f $(NAME)

$(NAME):
			gcc $(CFLAGS) $(NAME) get_next_line.c get_next_line_utils.c get_next_line.h \

re: clean all

.phony: all clean fclean