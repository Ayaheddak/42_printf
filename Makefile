FLAGS 	= -Wall -Wextra -Werror
CC = cc

SRCS 	= ft_printf.c ft_putchar.c ft_strlen.c ft_putnbr_fd.c\
		  ft_putstr.c ft_putnbr_base.c ft_putnbr_bs.c
	 
NAME 	= libftprintf.a

OBJS 	= ${SRCS:.c=.o}

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS)
	ar crs $(NAME) $(OBJS)
	
all: $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME) 

re : fclean all

