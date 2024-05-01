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

# Colors
DEF_COLOR	=	\033[0;39m
GRAY		=	\033[0;90m
RED			=	\033[0;91m
GREEN		=	\033[0;92m
YELLOW		=	\033[0;93m
BLUE		=	\033[0;94m
MAGENTA		=	\033[0;95m
CYAN		=	\033[0;96m
WHITE		=	\033[0;97m

# Program
NAME			=	libft.a

# Comands
COMPILER		=	cc
CFLAGS			=	-Wall -Wextra -Werror -g
AR				=	ar rcs
RM				=	rm -rf

# Structure
INCLUDES				=	-I./inc

SRC_DIR					=	./src
CTYPE_DIR				=	$(SRC_DIR)/ctype
LINKEDLIST_DIR			=	$(SRC_DIR)/linkedlist
NONSTANDART_DIR			=	$(SRC_DIR)/nonstandart
STDIO_DIR				=	$(SRC_DIR)/stdio/ft_printf
STDLIB_DIR				=	$(SRC_DIR)/stdlib
STRING_DIR				=	$(SRC_DIR)/string

CTYPE_SOURCES			=	$(wildcard $(CTYPE_DIR)/*.c)
LINKEDLIST_SOURCES		=	$(wildcard $(LINKEDLIST_DIR)/*.c)
NONSTANDART_SOURCES		=	$(wildcard $(NONSTANDART_DIR)/*.c)
STDIO_SOURCES			=	$(wildcard $(STDIO_DIR)/*.c)
STDLIB_SOURCES			=	$(wildcard $(STDLIB_DIR)/*.c)
STRING_SOURCES			=	$(wildcard $(STRING_DIR)/*.c)


SOURCES					=	$(CTYPE_SOURCES) \
							$(LINKEDLIST_SOURCES) \
							$(NONSTANDART_SOURCES) \
							$(STDIO_SOURCES) \
							$(STDLIB_SOURCES) \
							$(STRING_SOURCES) \

# Build
BUILD_DIR				= ./build
CTYPE_OBJECTS			= $(patsubst $(CTYPE_DIR)/%.c, $(BUILD_DIR)/src/ctype/%.o, $(CTYPE_SOURCES))
LINKEDLIST_OBJECTS		= $(patsubst $(LINKEDLIST_DIR)/%.c, $(BUILD_DIR)/src/linkedlist/%.o, $(LINKEDLIST_SOURCES))
NONSTANDART_OBJECTS		= $(patsubst $(NONSTANDART_DIR)/%.c, $(BUILD_DIR)/src/nonstandart/%.o, $(NONSTANDART_SOURCES))
STDIO_OBJECTS			= $(patsubst $(STDIO_DIR)/%.c, $(BUILD_DIR)/src/stdio/%.o, $(STDIO_SOURCES))
STDLIB_OBJECTS			= $(patsubst $(STDLIB_DIR)/%.c, $(BUILD_DIR)/src/stdlib/%.o, $(STDLIB_SOURCES))
STRING_OBJECTS			= $(patsubst $(STRING_DIR)/%.c, $(BUILD_DIR)/src/string/%.o, $(STRING_SOURCES))

OBJECTS					=	$(CTYPE_OBJECTS) \
							$(LINKEDLIST_OBJECTS) \
							$(NONSTANDART_OBJECTS) \
							$(STDIO_OBJECTS) \
							$(STDLIB_OBJECTS) \
							$(STRING_OBJECTS) \

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)
	@echo "$(GREEN)---------------$(DEF_COLOR)"
	@echo "$(GREEN)libft.a created$(DEF_COLOR)"

$(BUILD_DIR)/src/ctype/%.o: $(CTYPE_DIR)/%.c
	@mkdir -p $(@D)
	@$(COMPILER) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BUILD_DIR)/src/linkedlist/%.o: $(LINKEDLIST_DIR)/%.c
	@mkdir -p $(@D)
	@$(COMPILER) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BUILD_DIR)/src/nonstandart/%.o: $(NONSTANDART_DIR)/%.c
	@mkdir -p $(@D)
	@$(COMPILER) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BUILD_DIR)/src/stdio/%.o: $(STDIO_DIR)/%.c
	@mkdir -p $(@D)
	@$(COMPILER) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BUILD_DIR)/src/stdlib/%.o: $(STDLIB_DIR)/%.c
	@mkdir -p $(@D)
	@$(COMPILER) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BUILD_DIR)/src/string/%.o: $(STRING_DIR)/%.c
	@mkdir -p $(@D)
	@$(COMPILER) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@$(RM) $(BUILD_DIR)
	@echo "$(GRAY)files.o removed$(DEF_COLOR)"


fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)libft.a removed$(DEF_COLOR)"

re: fclean
	@make

.PHONY: all clean fclean re
