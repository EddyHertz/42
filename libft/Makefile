# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 14:44:43 by tyossa-e          #+#    #+#              #
#    Updated: 2024/10/01 21:27:33 by tyossa-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c\
		ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
		ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

CC        = cc

RM        = rm -rf

AR        = ar rcs

RANLIB        = ranlib

LFLAGS += -I.

all    :    $(NAME)
		@echo Compiling Library "libft.a" File "Only Mandatory Part": $@ ...

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
		@echo Cleaning All ".o & libft.a" Generated Files:
		$(RM) $(NAME)

re		:	fclean all
		@echo Cleaning All ".o & libft.a" Generated Files And Remake Everything:

.PHONY:	all clean fclean re
