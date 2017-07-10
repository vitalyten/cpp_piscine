# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 18:36:51 by vtenigin          #+#    #+#              #
#    Updated: 2017/07/09 23:31:26 by vtenigin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

FLAGS = -Wall -Wextra -Werror

SRC = Map.cpp Entity.cpp Game.cpp main.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -o $(NAME) $(SRC) -lncurses
fclean:
	rm -f $(NAME)

re: fclean all
