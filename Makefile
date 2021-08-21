# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/30 18:33:46 by pbie              #+#    #+#              #
#    Updated: 2021/08/21 08:41:45 by daeidi-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = $(SRCS:.c=.o)

NAME = libft.a

MAIN = main.c

OBJ_MAIN = $(MAIN:.c=.o)

TEST = test

CC = clang
RM = rm -f
CCLIB = ar rcs

CFLAGS = -Wall -Wextra -Werror

LFLAGS = -L. -lft

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(CCLIB) $(NAME) $(OBJS)

all: $(NAME)

main: $(OBJS) $(OBJ_MAIN)
	$(CC) $(CFLAGS) -o $(TEST) $(OBJ_MAIN) $(LFLAGS) -lbsd
	./$(TEST)

clean:
	$(RM) $(OBJS) $(OBJ_MAIN)

fclean: clean
	$(RM) $(NAME) $(TEST)

re: fclean all

.PHONY: all clean fclean re run main