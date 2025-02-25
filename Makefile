NAME			= libftprintf.a
CC				= cc
CFLAGS			= -Wall -Wextra -Werror
AR				= ar
ARFLAGS			= -rcs
SRCS			= ft_printf.c

OBJS			= $(SRCS:%.c=%.o)

RM				= rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	make -C ./libft
	cp ./libft/libft.a $(NAME)
	make -C ./libft clean
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS) $(BOBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re