# ############################################################################ #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: charles <me@cacharle.xyz>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/18 09:31:16 by charles           #+#    #+#              #
#    Updated: 2020/11/18 10:17:03 by charles          ###   ########.fr        #
#                                                                              #
# ############################################################################ #

NAME = serialization

CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
