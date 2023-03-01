# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdony <hdony@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 14:34:17 by hdony             #+#    #+#              #
#    Updated: 2022/11/04 15:02:52 by hdony            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				:=	main.cpp\
					Harl.cpp
OBJ				:=	$(SRC:.cpp=.o)
NAME			:=	harl
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

.PHONY:	clean fclean re