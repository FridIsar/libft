# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: openculturalcenter <openculturalcenter@    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 15:22:07 by ifridrik          #+#    #+#              #
#    Updated: 2023/04/07 12:29:14 by opencultura      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BONUS = .bonus

SRC_DIR = src

OBJ_DIR = .obj

DEP_DIR = .dep

# List of C source files
SRC =	\
	ft_bzero.c ft_striteri.c	\
	ft_calloc.c ft_itoa.c \
	ft_memchr.c ft_memcmp.c	\
	ft_memcpy.c ft_isalnum.c	\
	ft_isalpha.c ft_isascii.c	\
	ft_isdigit.c ft_isprint.c	\
	ft_memmove.c ft_memset.c	\
	ft_split.c ft_strchr.c	\
	ft_strdup.c ft_strjoin.c	\
	ft_strlcat.c ft_strlcpy.c	\
	ft_strlen.c ft_strmapi.c	\
	ft_strncmp.c ft_strnstr.c	\
	ft_strrchr.c ft_strtrim.c	\
	ft_substr.c ft_tolower.c	\
	ft_atoi.c ft_toupper.c	\
	ft_putchar_fd.c	ft_putstr_fd.c	\
	ft_putendl_fd.c	ft_putnbr_fd.c

SRC_BONUS =	\
	ft_lstnew_bonus.c ft_lstadd_front_bonus.c	\
	ft_lstsize_bonus.c ft_lstlast_bonus.c	\
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c	\
	ft_lstclear_bonus.c	ft_lstiter_bonus.c	\
	ft_lstmap_bonus.c
# List of objects created from source files
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
DEP = $(addprefix $(DEP_DIR)/, $(SRC:.c=.d))
OBJ_BONUS = $(addprefix $(OBJ_DIR)/, $(SRC_BONUS:.c=.o))
DEP_BONUS = $(addprefix $(DEP_DIR)/, $(SRC_BONUS:.c=.d))

MAKEFILE = Makefile

# Command used to create the library file
AR = ar -rcs
# Command used to remove files
RM = rm -f
RM_DIR = rm -rf

CCFLAGS = -Wall -Wextra -Werror -W

DEP_FLAGS = -MT $@ -MMD -MP

INCLUDE = -Iinclude/

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(MAKEFILE)
	@mkdir -p $(dir $@) $(DEP_DIR)/
	@$(CC) $(CFLAGS) $(DEP_FLAGS) $(INCLUDE) -c $< -o $@
	@mv $(patsubst %.o, %.d, $@) $(DEP_DIR)/

# Default target
all:
	@$(MAKE) $(NAME)

# Target that creates the library $(NAME) using the AR command
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(BONUS): $(OBJ) $(OBJ_BONUS)
	@touch $@
	@$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

bonus:
	@$(MAKE) $(BONUS)

# Rule for removing object files
clean:
	@$(RM_DIR) $(OBJ_DIR) $(DEP_DIR)
# Rule for removing object files and library file
fclean:
	@$(MAKE) clean
	@$(RM) $(NAME) $(BONUS)
# Rule to rebuild project from scratch
re:
	@$(MAKE) fclean
	@$(MAKE) all

-include $(DEP)
-include $(DEP_BONUS)

# Target to avoid a conflict with a file of the same name
.PHONY: all clean fclean re bonus
