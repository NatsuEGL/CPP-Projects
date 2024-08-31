# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/28 11:27:31 by akaabi            #+#    #+#              #
#    Updated: 2024/08/28 11:27:37 by akaabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = main.cpp 
OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp iter.hpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	@$(CC) $(FLAGS)  -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re