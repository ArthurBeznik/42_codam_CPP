
NAME			= 	ex01

SRCDIR			=	srcs
SRCS			=	main.cpp \
					Serializer.cpp \
					
					
OBJDIR			=	objs
OBJS			=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

INCLUDES		=	includes

CC				= 	c++

ifdef debug
	FLAGS		:=	-g -fsanitize=address -pedantic-errors -std=c++98 -I $(INCLUDES)
else ifdef dev
	FLAGS		:=	-Wall -Wextra -g -fsanitize=address -pedantic-errors -std=c++98 -I $(INCLUDES)
else
	FLAGS		:=	-Wall -Wextra -Werror -std=c++98 -I $(INCLUDES)
endif


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
