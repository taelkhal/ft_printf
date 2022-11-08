# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 17:11:41 by taelkhal          #+#    #+#              #
#    Updated: 2022/11/08 16:37:36 by taelkhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rc
SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_printf.c ft_hexalower.c ft_hexaupper.c \
		ft_hexalower_p.c ft_putnbr_p.c


OBJS = $(SRCS:.c=.o)
all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
$(OBJS) :
	$(CC) $(CFLAGS) -c $(SRCS)
clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all