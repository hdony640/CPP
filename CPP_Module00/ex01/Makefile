# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdony <hdony@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 11:08:34 by hdony             #+#    #+#              #
#    Updated: 2022/11/02 16:31:23 by hdony            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				:=	main.cpp phonebook.cpp contact.cpp
OBJ				:=	$(SRC:.cpp=.o)
NAME			:=	phonebook
CPPC			:=	c++
CPPFLAGS		:=	-Werror -Wall -Wextra -g -std=c++98
RM 				:=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		@$(CPPC) $(CPPFLAGS) $(OBJ) -o $(NAME) 

clean:
	@rm -f $(OBJ)
	@echo "All <file>.o have been removed."

fclean: clean
	@rm -f $(NAME)
	@echo "executable has been removed."

re: fclean all

.PHONY:	clean fclean re all