# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/09/29 14:59:12 by abeznik       #+#    #+#                  #
#    Updated: 2022/11/10 14:23:47 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= 	ex01

SRCS			=	main.cpp \
					Zombie.cpp \
					zombieHorde.cpp \

OBJECT			=	$(SRCS:.cpp=.o)

COMPILE			= 	c++

FLAGS			= 	-Wall -Wextra -Werror -std=c++98 -g

RESET			= 	\033[0m
GREEN 			= 	\033[38;5;46m
WHITE 			= 	\033[38;5;15m
GREY 			= 	\033[38;5;8m
ORANGE 			= 	\033[38;5;202m
RED 			= 	\033[38;5;160m

all: $(NAME)

%.o: %.cpp
	@echo "$(GREY)Compiling...				$<"
	@$(COMPILE) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	@echo "$(GREEN)----------------------------------------------------"
	@$(COMPILE) $(FLAGS) $(OBJECT) -o $(NAME)
	@echo "Executable				./$(NAME) $(RESET)"

clean:
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(OBJECT)
	@echo "$(GRAY)Removed object files $(RESET)"

fclean: clean
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(NAME)
	@echo "$(GRAY)Removed executable file $(RESET)"

re: fclean all

db: all
	lldb ex01

.PHONY: all clean fclean re