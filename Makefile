# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/01 18:33:59 by mdebelle          #+#    #+#              #
#    Updated: 2015/12/08 15:32:23 by tsanzey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = main.c gnl.c parsefile.c fill.c piece.c piece_coudes.c putitin.c \
	  puttetris.c putcoudes.c putbarre.c putziggy.c manip_lst.c
OBJ = $(SRC:%.c=obj/%.o)

CXX = clang
CXXFLAGS = -Wall -Werror -Wextra

INC = -I includes
LIB = libft/

all: $(NAME)

$(NAME): obj $(OBJ)
	@make -s -C $(LIB)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ) $(INC) -L$(LIB) -lft -g

obj/%.o: src/%.c
	$(CXX) $(CXXFLAGS) $(INC) -o $@ -c $< -I$(LIB)

obj:
	mkdir -p obj/

clean:
	rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean all clean re
