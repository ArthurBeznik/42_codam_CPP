# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/09/29 14:59:12 by abeznik       #+#    #+#                  #
#    Updated: 2023/03/01 11:52:18 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= 	ex01

SRCDIR			=	srcs
SRCS			=	main.cpp \
					Animal.cpp \
					Cat.cpp \
					Dog.cpp \
					WrongCat.cpp \
					WrongAnimal.cpp \
					Brain.cpp \
					
OBJDIR			=	objs
OBJS			=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

INCLUDES		=	includes

CC				= 	c++
FLAGS			=	-Wall -Werror -Wextra -pedantic-errors -I $(INCLUDES) -std=c++98 

RESET			= 	\033[0m
GREEN 			= 	\033[1;32m
WHITE 			= 	\033[38;5;15m
GREY 			= 	\033[1;36m
ORANGE 			= 	\033[38;5;202m
RED 			= 	\033[1;31m

all:		$(NAME)

$(NAME):	$(OBJS)
	@echo "$(GREEN)----------------------------------------------------"
	@$(CC) $(FLAGS) $(OBJS)  -o $(NAME)
	@echo "Executable				./$(NAME) $(RESET)"

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@echo "$(GREY)Compiling...				$<"
	@mkdir -p $(OBJDIR)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -rf $(OBJDIR)
	@echo "$(GRAY)Removed object files $(RESET)"

fclean: clean
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(NAME)
	@echo "$(GRAY)Removed executable file $(RESET)"

re: fclean all

.PHONY: all clean fclean re
