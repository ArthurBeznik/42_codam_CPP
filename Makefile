# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/10 13:24:58 by abeznik       #+#    #+#                  #
#    Updated: 2022/11/14 09:32:35 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# ? P = Path
# ? D = Directory

MODULE_D		=	00 01 02

EXO_D			=	ex00/ ex01/ ex02/ ex03/ ex04/ ex05/

all:
	@for dir in $(MODULE_D) ; do \
		for exo in $(EXO_D) ; do \
			$(MAKE) re -C $$dir/$$exo ; \
			echo "\n" ; \
		done ; \
	done

# find:
# 	for dir in $(MODULE_D) ; do \
# 		for exo in $(EXO_D) ; do \
# 			if [[ $(find $$dir/$$exo/Makefile) ]] ; then \
# 		done ; \
# 	done

fclean:
	for dir in $(MODULE_D) ; do \
		for exo in $(EXO_D) ; do \
			$(MAKE) fclean -C $$dir/$$exo ; \
			echo "\n" ; \
		done ; \
	done

re: fclean all
