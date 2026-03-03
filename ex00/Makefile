# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/03 15:36:51 by isahmed           #+#    #+#              #
#    Updated: 2026/03/03 15:36:53 by isahmed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Bureaucrat.cpp GradeExceptions.cpp
NAME = bureaucrat
ODIR = objs

OBJS = $(patsubst %.cpp, $(ODIR)/%.o, $(SRCS))

all: $(NAME) 

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(ODIR)/%.o: %.cpp | $(ODIR)
	$(CXX) $(CXXFLAGS) $< -c -o $@

$(ODIR): 
	mkdir -p $(ODIR)

clean:
	rm -rf $(ODIR) 

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

