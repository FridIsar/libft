#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

# Compiler and flags
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I. -I./$(INCDIR)
RM		=	rm -f

# Output file name
NAME	=	libft.a

# Sources are all .c files
SRCS	=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c

# Objects are all .o files
OBJS	=	$(patsubst %.c,%.o,$(SRCS)) # Wildcard for sources is forbidden by norminette?


#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

all: $(NAME)

# Compiles sources into objects
$(OBJS): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Generates .a file
$(NAME): $(OBJS)
	ar -rcs $(NAME) $< $@

# Removes objects
clean:
	$(RM) $(OBJS)

# Removes objects and executables
fclean: clean
	$(RM) $(NAME)

# Test with main
test:
	$(CC) $(CFLAGS) $(SRCS) main.c
	./a.out

# Removes objects and executables and remakes
re: fclean all

.PHONY: all bonus clean fclean re test
