# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/29 22:09:57 by ishaaq            #+#    #+#              #
#    Updated: 2026/04/02 15:45:43 by ishaaq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Bureaucrat.cpp GradeExceptions.cpp AForm.cpp PresidentialPardonForm.cpp 
NAME = bureaucrat
ODIR = objs

OBJS = $(patsubst %.cpp, $(ODIR)/%.o, $(SRCS))

all: $(NAME) 

$(NAME): $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(ODIR):
	mkdir -p $(ODIR)

$(ODIR)/%.o: %.cpp | $(ODIR)
	$(CXX) $(CXXFLAGS) $< -c -o $@

clean:
	rm -rf $(ODIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
