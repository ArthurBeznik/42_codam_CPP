# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/09/29 14:59:12 by abeznik       #+#    #+#                  #
#    Updated: 2023/08/11 10:37:08 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= 	PmergeMe

SRCDIR			=	srcs
SRCS			=	main.cpp \
					PmergeMe.cpp \
					
OBJDIR			=	objs
OBJS			=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

INCLUDES		=	includes

CC				= 	c++
FLAGS			=	-Wall -Werror -Wextra -std=c++98 -pedantic-errors -I $(INCLUDES) -g

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

db:
	lldb $(NAME)

re: fclean all

.PHONY: all clean fclean re
