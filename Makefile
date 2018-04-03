# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchiche <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/13 17:48:07 by dchiche           #+#    #+#              #
#    Updated: 2018/01/18 20:20:42 by dchiche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = libft/ft_putchar.c libft/ft_putstr.c libft/ft_strlen.c libft/ft_strchr.c libft/ft_atoi.c libft/ft_strdup.c libft/ft_strrev.c libft/ft_itoa.c libft/ft_nlen.c libft/ft_nlen_base.c libft/ft_putnbr.c libft/ft_putnbr_max.c libft/ft_putnbr_max_u.c libft/ft_putnbr_base.c ft_type.c ft_c.c ft_s.c ft_d_or_i.c ft_u.c ft_x.c ft_x_maj.c ft_o.c ft_p.c ft_printf.c ft_specifier.c parser.c
FLAGS = -Wall -Wextra -Werror
LIB = ./
OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "> Libftprintf has been made :)"
	@ar rsc $(NAME) $(OBJ)

%.o : %.c
	@echo "=\c"
	@gcc -I $(LIB) -c $^ $(FLAGS) -o $@

clean :
	@echo "----> Libftprintf has been cleaned :)"
	@rm -rf $(OBJ)
	@make -C ./libft/ fclean

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: fclean clean re all
