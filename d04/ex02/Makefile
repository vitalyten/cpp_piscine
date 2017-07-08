# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 18:36:51 by vtenigin          #+#    #+#              #
#    Updated: 2017/07/07 22:29:36 by vtenigin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game

FLAGS = -Wall -Wextra -Werror

SRC = AWeapon.cpp Enemy.cpp PowerFist.cpp SuperMutant.cpp Character.cpp \
	PlasmaRifle.cpp RadScorpion.cpp main.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all
