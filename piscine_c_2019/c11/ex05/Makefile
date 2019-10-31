# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmendy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 21:05:08 by rmendy            #+#    #+#              #
#    Updated: 2019/09/19 22:14:58 by rmendy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
SRCS	= main.c putnbr.c
SRCDIR	= ./
INCDIR	= main.h
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
OBJ		= $(addprefix $(SRCDIR), $(SRCS:.c=.o))

$(SRCDIR)%.o:	$(SRCDIR)%.c
		$(CC) $(FLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): 		$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

all: 			$(NAME)

clean:
		rm -f $(OBJ)

fclean: 		clean
		rm -f $(NAME)

.PHONY:			all clean fclean
