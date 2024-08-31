# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 07:51:23 by akaabi            #+#    #+#              #
#    Updated: 2024/08/31 08:42:29 by akaabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = arr
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = main.cpp
OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp Array.hpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) Array.tpp
	@$(CC) $(FLAGS)  -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re