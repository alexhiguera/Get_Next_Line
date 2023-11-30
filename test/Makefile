# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 14:38:05 by ahiguera          #+#    #+#              #
#    Updated: 2023/11/30 15:14:10 by ahiguera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl
NAME_BONUS = gnl_bonus

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) main.c ../src/get_next_line.c ../src/get_next_line_utils.c -I../src/

clean:
		rm -f
fclean:
		rm -f $(NAME) $(NAME_BONUS)

re: clean all

bonus: $(NAME_BONUS)

$(NAME_BONUS):
	gcc $(CFLAGS) -o $(NAME_BONUS) main_bonus.c ../src/get_next_line_bonus.c ../src/get_next_line_utils_bonus.c -I../src/

.phony: all clean fclean re bonus