# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: columbux <columbux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 14:38:05 by ahiguera          #+#    #+#              #
#    Updated: 2024/02/12 17:53:32 by columbux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= get_next_line
NAME_BONUS	= gnl_bonus

CFLAGS		= -Wall -Wextra -Werror

SRC			= src/get_next_line.c src/get_next_line_utils.c
SRC_BONUS	= src/get_next_line_bonus.c src/get_next_line_utils_bonus.c

#------------------------------------------------#
#   ASCII Colors                                 #
CLR_RMV		:= "\033[0m"
RED		    := "\033[1;31m"
GREEN		:= "\033[1;32m"
YELLOW		:= "\033[1;33m"
BLUE		:= "\033[1;34m"
CYAN 		:= "\033[1;36m"
#------------------------------------------------#

all: 		$(NAME)

$(NAME):
					@echo $(YELLOW) "Compiling....\n"
					@gcc $(CFLAGS) -o $(NAME) test/main.c $(SRC) -I../src/
					@echo $(GREEN) "GNL Compiled! o.o\n"

clean:
					@rm -f
fclean:
					@rm -f $(NAME) $(NAME_BONUS)

re: 		fclean all

bonus:		$(NAME_BONUS)

$(NAME_BONUS):
					@gcc $(CFLAGS) -o $(NAME_BONUS) $(SRC_BONUS) -I../src/

.phony: all clean fclean re bonus