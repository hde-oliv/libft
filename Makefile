SRC		:=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
			ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c ft_dfree.c ft_isspace.c ft_intlen.c ft_range.c \
			ft_atoll.c get_next_line.c ft_printf.c ft_char.c ft_hex.c \
			ft_int.c ft_tag.c 

OBJS    :=	$(SRC:.c=.o)

NAME	:=	libft.a
RLIB    :=	ranlib
CC		:=	clang
LIB		:=	ar rcs

CFLAGS	+=	-Wall -Wextra -Werror
RM		:=	rm -rf



all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(LIB) $(NAME) $(OBJS)
			$(RLIB) $(NAME)

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re
