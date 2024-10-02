NAME = libftprintf.a

SRC = 	ft_printf.c \
		print_base.c \
		print_char.c \
		print_number.c \
		print_pointer.c \
		print_string.c \
		utils.c \
	
OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror - Wextra
RM = rm -rf
AR = ar crs

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

exclean:
		$(RM) a.out

.PHONY: all clean fclean re exclean
