SRCS    =	printf/libftprintf.a \
			printf/ft_printf.c \
			printf/ft_utils.c \
			ft_utils.c \
			push_swap.c
OBJS    = ${SRCS:.c=.o}
INCS    = includes
NAME    = push_swap.a
LIBC    = ar rc
LIBR    = ranlib
CC        = gcc
RM        = rm -rf
CFLAGS    = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

compile:
	${CC} -fsanitize=address -g ${CFLAGS} ${SRCS} ${c} && ./a.out 12 5 23 33 3

c:
	${RM} *.o printf/*.o push_swap.a

C:
	${RM} ${c} a.out a.out.dSYM

re: fclean all

.PHONY: all clean fclean compile c C re