NAME			= libftprintf.a
CC				= cc
CFLAGS			= -Wall -Wextra -Werror
AR				= ar
ARFLAGS			= -rcs
SRCS			= ft_format.c ft_printf.c ft_putchar.c ft_puthex.c \
				  ft_putnbr.c ft_putptr.c ft_putstr.c ft_strlen.c

OBJS			= $(SRCS:%.c=%.o)
RM				= rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS) $(BOBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 