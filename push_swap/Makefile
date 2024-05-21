CFLAGS = -Wall -Wextra -Werror
CC = gcc
SOURCE = push_swap.c
OBJECTS = $(SOURCE:.c=.o)
LIBFT = ./libft/libft.a
NAME = push_swap

all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) $(LIBFT)

$(OBJECTS): $(SOURCE)
	$(CC) $(CFLAGS) -c $(SOURCE)

$(LIBFT):
	$(MAKE) -C ./libft

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJECTS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all