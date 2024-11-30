SRCS = get_next_line.c get_next_line_utils.c

BSRCS = get_next_line_bonus.c get_next_line_utils_bonus.c

NAME = get_next_line.a

BNAME = get_next_line_bonus.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.c=.o)

BOBJ = $(BSRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -I. -c $(<) -o $@

all: $(NAME)

ball: $(BNAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(BNAME): $(BOBJ)
	@ar rcs $(BNAME) $(BOBJ)

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME) $(BNAME)

re: fclean all

.PHONY: all clean fclean re ball