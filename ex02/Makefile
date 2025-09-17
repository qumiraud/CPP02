# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/11 16:20:11 by qumiraud          #+#    #+#              #
#    Updated: 2025/09/17 15:21:22 by qumiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = NowWeTalking

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp\
	Fixed.class.cpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o : %*.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
