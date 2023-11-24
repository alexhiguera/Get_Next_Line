# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 14:38:05 by ahiguera          #+#    #+#              #
#    Updated: 2023/11/23 17:00:38 by ahiguera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl

CFLAGS = -c -Wall -Wextra -Werror -D

all: $(NAME)

clean:
		rm -fm

$(NAME):
			gcc $(CFLAGS) $(NAME) $(SRC)

re: clean all

.phony: all clean