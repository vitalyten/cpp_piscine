# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 18:36:51 by vtenigin          #+#    #+#              #
#    Updated: 2017/07/05 19:17:00 by vtenigin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

FLAGS = -Wall -Wextra -Werror

SRC = Fixed.cpp main.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all
