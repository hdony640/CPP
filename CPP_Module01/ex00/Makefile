# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdony <hdony@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 12:47:34 by hdony             #+#    #+#              #
#    Updated: 2022/11/10 09:50:20 by hdony            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				:=	main.cpp\
					newZombie.cpp\
					randomChump.cpp\
					Zombie.cpp 
OBJ				:=	$(SRC:.cpp=.o)
NAME			:=	zombie
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