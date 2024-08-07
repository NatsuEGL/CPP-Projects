# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 08:00:10 by akaabi            #+#    #+#              #
#    Updated: 2024/07/11 08:09:00 by akaabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = main.cpp ScalarConverter.cpp
OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp ScalarConverter.hpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	@$(CC) $(FLAGS)  -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re