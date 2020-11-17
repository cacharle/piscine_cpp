# ############################################################################ #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 09:16:44 by cacharle          #+#    #+#              #
#    Updated: 2020/11/17 16:41:44 by charles          ###   ########.fr        #
#                                                                              #
# ############################################################################ #

RM = rm -f

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

NAME = megaphone
SRC = megaphone.cpp


all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all
