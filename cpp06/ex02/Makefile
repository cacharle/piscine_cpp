# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/15 09:59:30 by charles           #+#    #+#              #
#    Updated: 2020/12/14 10:53:41 by cacharle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify_real_type

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp
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
