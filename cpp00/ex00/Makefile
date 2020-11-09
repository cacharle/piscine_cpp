# ############################################################################ #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacharle <me@cacharle.xyz>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 09:16:44 by cacharle          #+#    #+#              #
#    Updated: 2020/11/09 09:16:45 by cacharle         ###   ########.fr        #
#                                                                              #
# ############################################################################ #

RM = rm -f

CC = clang++
CCFLAGS = -Wall -Wextra -Werror

NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CCFLAGS) -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
