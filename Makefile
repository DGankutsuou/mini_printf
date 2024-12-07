CC = cc

CCFLAGS = -Wall -Wextra -Werror

SRC = mini_printf.c mini_printf_utils.c

OBJ = $(SRC:.c=.o)

NAME = libmini_printf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^

%.o: %.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJ)