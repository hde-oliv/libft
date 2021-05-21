SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a

CC		=	clang

LIB		=	ar rc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


${NAME}:	${OBJS}
			${LIB} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all

test:		all
			${CC} ${CFLAGS} -lbsd -fsanitize=address test/tests.c -L. -lft -o tests

.PHONY: 	all clean fclean re