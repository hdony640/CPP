# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdony <hdony@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 10:07:48 by hdony             #+#    #+#              #
#    Updated: 2022/11/10 09:57:40 by hdony            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				:=	main.cpp\
					Weapon.cpp\
					HumanA.cpp\
					HumanB.cpp
OBJ				:=	$(SRC:.cpp=.o)
NAME			:=	war
CPPC			:=	g++
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