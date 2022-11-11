# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/09/29 14:59:12 by abeznik       #+#    #+#                  #
#    Updated: 2022/10/04 10:08:34 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		:=	megaphone

# Colours
RED 		:=	\033[1;31m
GRN 		:=	\033[1;32m
BLUE		:=	\033[1;36m
YEL 		:=	\033[0;33m
DEF 		:=	\033[0m

# Srcs
SRCS		=	megaphone.cpp

# Config
CC			:=	c++
FLAGS		:= -Wall -Werror -Wextra -std=c++98

all:	$(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

shhh:	re
	./${NAME} "shhhhh... I think the students are asleep..."

damn:	re
	./${NAME} Damnit " ! " "Sorry students, I thought this thing was off."

loud:	re
	./${NAME}

clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re