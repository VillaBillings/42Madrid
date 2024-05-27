CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCE = ft_printf.c ft_printf_utils.c
OBJECTS = $(SOURCE:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCE)
	$(CC) $(CFLAGS) -c $(SOURCE)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
