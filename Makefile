.PHONY: all bonus clean fclean re

NAME = libft.a

HEADER = libft.h

SRC = ft_atoi.c	ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c\
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
	ft_split.c ft_strlcat.c ft_strchr.c ft_strdup.c ft_strjoin.c\
	ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c\
	ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c\

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(OBJ): $(HEADER)

$(NAME): $(OBJ)
	ar rc $(NAME) $?
	ranlib $(NAME)

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
