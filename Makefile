# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saospina <saospina@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 15:56:25 by saospina          #+#    #+#              #
#    Updated: 2025/10/21 15:57:52 by saospina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c print_char.c print_string.c print_pointer.c \
      print_decimal.c print_unsigned.c print_hex.c utils.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
        make -C $(LIBFT_DIR)
        ar rcs $(NAME) $(OBJ) $(LIBFT)

clean:
        $(RM) $(OBJ)
        make -C $(LIBFT_DIR) clean

fclean: clean
        $(RM) $(NAME)
        make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
