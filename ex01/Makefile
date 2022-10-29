# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blino <blino@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 14:59:38 by blino             #+#    #+#              #
#    Updated: 2022/10/29 18:09:17 by blino            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook
SRCS	= contact.cpp main.cpp phonebook.cpp
OBJS	= $(SRCS:.cpp=.o)
COMP	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp
	@$(COMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "$(COMP) $(FLAGS) $(OBJS) -o $(NAME)"
	@$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re