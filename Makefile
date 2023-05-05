SRCS    =	ft_set_lst.c \
			push_swap.c \
			printf/libftprintf.a \
			19_libft/ft_atoi.c \
			19_libft/ft_lstnew_bonus.c \
			19_libft/ft_lstadd_back_bonus.c \
			main.c
OBJS    = ${SRCS:.c=.o}
INCS    = includes
NAME    = push_swap
LIBC    = ar rcs
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
	${CC} -fsanitize=address -g ${CFLAGS} -o ${NAME} ${SRCS} ${c} && ./push_swap 12 2 23 33 3

c:
	${RM} *.o printf/*.o

C:
	${RM} ${c} push_swap push_swap.dSYM


re: fclean all

.PHONY: all clean fclean compile c C re