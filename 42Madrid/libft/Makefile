CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCE = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_split.c \
		ft_strtrim.c \

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \
		
NAME = libft.a

$(NAME): $(SOURCE:.c=.o)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re all bonus

bonus: $(BONUS:.c=.o)

$(BONUS:.c=.o):
	${CC} ${CFLAGS} -c $(BONUS)
	ar -rcs ${NAME} ${BONUS:.c=.o}

clean:
	@rm -f $(SOURCE:.c=.o) $(BONUS:.c=.o)

fclean: clean
	@rm -f $(NAME)

re: fclean all

all: $(NAME)

.DEFAULT_GOAL := all