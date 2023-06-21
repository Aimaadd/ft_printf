NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS =    ft_printf.c \
	ft_type.c \
	ft_putchar.c \
	ft_print_hex.c \
	ft_print_address.c \
	ft_print_percent.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_printnbr_u.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	${RM} ${OBJS} 

fclean: clean
	${RM} ${NAME}

re: fclean all