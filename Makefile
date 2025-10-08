NAME = libftprintf.a

SRC = ft_printf.c print_char.c print_string.c print_pointer.c \
      print_decimal.c print_unsigned.c print_hex.c utils.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re