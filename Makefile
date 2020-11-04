NAME = libft.a
SRC = *.c
OBJ = *.o
FLAG = -Wall -Werror -Wextra
OPTION = -c

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)
	rm -rf *.o
clean:
	rm -rf *.o
fclean: clean
	rm -f $(NAME)
re: fclean all