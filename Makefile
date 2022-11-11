# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/10 13:24:58 by abeznik       #+#    #+#                  #
#    Updated: 2022/11/10 13:55:21 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# ? P = Path
# ? D = Directory

MODULE_D	=	00 \
				01 \
				02 \

MAKE_D		=	ex00/ \
				ex01/ \
				ex02/ \
				ex03/ \
				ex04/ \
				ex05/ \

all: 00
	make -C ./00/ex00
	make -C ./00/ex01
	# make -C ./00/ex02

	make -C ./01/ex01
	# make -C ./01/ex02
	# make -C ./01/ex03
	# make -C ./01/ex04
	# make -C ./01/ex05

del:
	make fclean -C 00/ex00
	make fclean -C 00/ex01