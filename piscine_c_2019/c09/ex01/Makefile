# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmendy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/17 19:15:16 by rmendy            #+#    #+#              #
#    Updated: 2019/09/17 20:39:22 by rmendy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c 
SRCDIR	= ./srcs/
INCDIR	= ./includes/
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
OBJ		= $(addprefix $(SRCDIR), $(SRCS:.c=.o))

$(SRCDIR)%.o:	$(SRCDIR)%.c
	$(CC) $(FLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): 		$(OBJ)
	ar rcs $(NAME) $(OBJ)

all: 			$(NAME)

clean:
	rm -f $(OBJ)

fclean: 		clean
	rm -f $(NAME)

re: 			fclean all

.PHONY:			all clean fclean re
