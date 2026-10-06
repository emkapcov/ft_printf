NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
	ft_print_char.c \
	ft_print_string.c \
	ft_print_number.c \
	ft_printf_unsigned.c \
	ft_print_hex.c \
	ft_printf_pointer.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all