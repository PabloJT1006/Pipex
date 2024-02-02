# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 13:26:31 by pjimenez          #+#    #+#              #
#    Updated: 2024/02/02 15:44:41 by pjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

RM = rm -f

LIB = pipex.a

FILES = main.c cmd_execute.c process.c utils.c

LIBFT = libft/libft.a

FLAGS = -Wall -Wextra -Werror

OBJS = $(FILES:.c=.o)
all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(LIB)
	ar rcs $(LIB) $(OBJS)
	gcc $(FLAGS) -g -o $(NAME) $(LIB)

$(LIBFT):
	make -C libft/ all

clean:
	make -C libft/ clean
	@$(RM) -rf $(OBJS)

fclean: clean
	make -C libft/ fclean
	@$(RM) -f $(OBJS)
	@$(RM) -f $(NAME)
	@$(RM) -f $(LIB)

re: fclean all

.PHONY: all clean fclean re