# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 12:20:29 by dmdemirk          #+#    #+#              #
#    Updated: 2023/11/20 18:29:24 by dmdemirk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

COMPILER	=	gcc
CFLAGS		=	-Wall -Wextra -Werror -g
AR			=	ar rcs

INCLUDE		=	libft.h

SOURCES	=			ft_atoi.c			\
					ft_bzero.c			\
					ft_calloc.c			\
					ft_get_next_line.c	\
					ft_isalnum.c		\
					ft_isalpha.c		\
					ft_isascii.c		\
					ft_isdigit.c		\
					ft_isprint.c		\
					ft_itoa.c			\
					ft_memchr.c			\
					ft_memcmp.c			\
					ft_memcpy.c			\
					ft_memmove.c		\
					ft_memset.c			\
					ft_putchar_fd.c		\
					ft_putendl_fd.c		\
					ft_putnbr_fd.c		\
					ft_putstr_fd.c		\
					ft_split.c			\
					ft_strchr.c			\
					ft_strdup.c			\
					ft_striteri.c		\
					ft_strjoin.c		\
					ft_strlcat.c		\
					ft_strlcpy.c		\
					ft_strlen.c			\
					ft_strmapi.c		\
					ft_strncmp.c		\
					ft_strnstr.c		\
					ft_strrchr.c		\
					ft_strtrim.c		\
					ft_substr.c			\
					ft_tolower.c		\
					ft_toupper.c		\

SOURCES_BONUS	=	ft_lstadd_back.c	\
					ft_lstadd_front.c	\
					ft_lstclear.c		\
					ft_lstdelone.c		\
					ft_lstiter.c		\
					ft_lstlast.c		\
					ft_lstmap.c			\
					ft_lstnew.c			\
					ft_lstsize.c		\

SRC_DIR = ./src

SOURCES := $(addprefix $(SRC_DIR)/, $(SOURCES))
SOURCES_BONUS := $(addprefix $(SRC_DIR)/, $(SOURCES_BONUS))

OBJS = $(patsubst %.c, %.o, $(SOURCES))
OBJS_BONUS = $(patsubst %.c, %.o, $(SOURCES_BONUS))


all: $(NAME) bonus

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

%.o: $(SRC_DIR)/%.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	@cd $(SRC_DIR)
	@rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	@cd $(SRC_DIR)
	@rm -f $(NAME)

re: fclean
	@make

.PHONY: all clean fclean re
