# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdony <hdony@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 10:58:52 by hdony             #+#    #+#              #
#    Updated: 2022/12/05 13:56:46 by hdony            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				:=	main.cpp
OBJ				:=	$(SRC:.cpp=.o)
NAME			:=	template
CPPC			:=	c++
CPPFLAGS		:=	-Werror -Wall -Wextra -g -std=c++98 \
-fsanitize=address -static-libsan -g
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