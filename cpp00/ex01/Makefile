# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/13 08:32:50 by charles           #+#    #+#              #
#    Updated: 2020/04/13 08:42:09 by charles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM = rm -f

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

NAME = crapyphonebook
SRC = main.cpp PhoneBook.cpp Contact.cpp utils.cpp
OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.c
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
