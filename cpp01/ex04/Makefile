# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/21 12:53:38 by nmeunier          #+#    #+#              #
#    Updated: 2026/09/24 15:09:42 by nmeunier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 

NAME = 
OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all