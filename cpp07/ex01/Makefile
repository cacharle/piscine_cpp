# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/14 19:48:34 by charles           #+#    #+#              #
#    Updated: 2020/04/14 20:02:14 by charles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = iter.cpp
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
