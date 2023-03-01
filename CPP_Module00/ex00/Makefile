# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdony <hdony@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 15:06:24 by hdony             #+#    #+#              #
#    Updated: 2022/11/02 16:31:28 by hdony            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			:=	megaphone.cpp
NAME			:=	megaphone
CPPC			:= c++
CPPFLAGS		:= -Werror -Wall -Wextra -g -std=c++98
RM 				:= rm -rf
OBJ_FILES 		:= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
		@$(CPPC) $(CPPFLAGS) $(OBJ_FILES) -o $(NAME)

clean:
	@rm -f $(OBJ_FILES)
	@echo "All <file>.o have been removed."

fclean: clean
	@rm -f $(NAME)
	@echo "executable ./megaphone has been removed."

re: fclean all

.PHONY:	clean fclean re all
