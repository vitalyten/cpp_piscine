# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 18:36:51 by vtenigin          #+#    #+#              #
#    Updated: 2017/07/08 18:14:01 by vtenigin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fantasy

FLAGS = -Wall -Wextra -Werror

SRC = AMateria.cpp Cure.cpp MateriaSource.cpp Character.cpp Ice.cpp main.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all
