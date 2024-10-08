# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 14:44:43 by tyossa-e          #+#    #+#              #
#    Updated: 2024/10/08 15:49:52 by tyossa-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_p.c ft_x.c ft_usputnbr_fd.c ft_strlen.c ft_putstr_fd.c \
		 ft_putchar_fd.c ft_putnbr_fd.c ft_printf.c

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

CC        = cc

RM        = rm -rf

AR        = ar rcs

RANLIB        = ranlib

LFLAGS += -I.

all    :    $(NAME)
		@echo Compiling Library "libftprintf.a" File "Only Mandatory Part": $@ ...

$(NAME)    :    $(OFILES)
		@echo Compiling Library File: $@ ...
		$(AR) $(NAME) $(OFILES)
		$(RANLIB) $(NAME)

%.o:    %.c
		@echo Compiling Binary Files: $@ ...
		$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)

clean    :
		@echo Cleaning The o Generated Files: $@ ...
		$(RM) ${OFILES}


fclean	:	clean
		@echo Cleaning All ".o & libftprintf.a" Generated Files:
		$(RM) $(NAME)

re		:	fclean all
		@echo Cleaning All ".o & libftprintf.a" Generated Files And Remake Everything:

.PHONY:	all clean fclean re
