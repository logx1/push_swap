# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 20:21:53 by abdel-ou          #+#    #+#              #
#    Updated: 2023/03/30 14:43:32 by abdel-ou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBFT = libft
all: $(NAME)
	
$(NAME):
	@make -C $(LIBFT)

	cc $(FLAGS) libft/libft.a *.c -o $(NAME)


clean:
	cd libft && make clean
	
	cc $(FLAGS) libft/libft.a *.c -o $(NAME)
	
fclean:
	cd libft && make fclean
	rm -rf push_swap
	

re:
	cd libft && make re
	cc $(FLAGS) libft/libft.a *.c -o $(NAME)

	