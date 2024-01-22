# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 10:23:21 by akaabi            #+#    #+#              #
#    Updated: 2024/01/13 21:44:22 by akaabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = attack
CC = c++
FLAGS = -Wall -Wextra -Werror  -std=c++98
SOURCE = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp 
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	@$(CC) $(FLAGS)  -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all