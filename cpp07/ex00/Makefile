# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/14 19:48:34 by charles           #+#    #+#              #
#    Updated: 2020/04/14 19:58:14 by charles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a_few_functions

CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = whatever.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $<

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
