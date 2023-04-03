# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 15:22:07 by ifridrik          #+#    #+#              #
#    Updated: 2023/04/03 15:22:09 by ifridrik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Command used to create the library file
LIB = ar rcs
# Command used to remove files
RM = rm -f
# C Compiler and flags
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
# Name of library file
NAME = libft.a
# List of C source files
SRC =	ft_bzero.c ft_striteri.c			\
	ft_calloc.c ft_itoa.c 			\
	ft_memchr.c ft_memcmp.c			\
	ft_memcpy.c ft_isalnum.c		\
	ft_isalpha.c ft_isascii.c		\
	ft_isdigit.c ft_isprint.c		\
	ft_memmove.c ft_memset.c		\
	ft_split.c ft_strchr.c			\
	ft_strdup.c ft_strjoin.c		\
	ft_strlcat.c ft_strlcpy.c		\
	ft_strlen.c ft_strmapi.c		\
	ft_strncmp.c ft_strnstr.c		\
	ft_strrchr.c ft_strtrim.c		\
	ft_substr.c ft_tolower.c		\
	ft_atoi.c ft_toupper.c	\
	ft_putchar_fd.c	ft_putstr_fd.c 		\
	ft_putendl_fd.c	ft_putnbr_fd.c
# List of objects created from source files
OBJ = $(SRC:.c=.o)
# Name of header file
INCLUDE = libft.h
# Default target
all: $(NAME)
# Target that creates the library $(NAME) using the LIB command
$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)
# Rule for building object files from C source files
%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<
# Rule for removing object files
clean:
	$(RM) $(OBJ)
# Rule for removing object files and library file
fclean: clean
	$(RM) $(NAME)
# Rule to rebuild project from scratch
re: fclean all
