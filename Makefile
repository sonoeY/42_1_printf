LIBFT = libft/libft.a
NAME = libftprintf.a
SRCS = ft_printf.c h_convert_num.c h_print_num.c h_print_text.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS) $(LIBFT)
	cp -f $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)
all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C libft fclean

fclean: clean
	rm -f $(NAME)

re: fclean all

$(LIBFT):
	make -C libft

.PHONY: all clean fclean re
