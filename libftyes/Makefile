NAME	= libft.a
FLAGS	= -Wall -Wextra -Werror
CC		= gcc

SRC		= ft_isdigit.c	ft_memmove.c	ft_strchr.c	ft_strnstr.c  \
		  ft_atoi.c	ft_isprint.c	ft_memset.c	ft_strdup.c	ft_strrchr.c \
		  ft_bzero.c	ft_itoa.c	ft_putchar_fd.c	ft_strjoin.c \
		  ft_calloc.c	ft_memccpy.c	ft_putendl_fd.c	ft_strlcat.c	ft_substr.c \
		  ft_isalnum.c	ft_memchr.c	ft_putnbr_fd.c	ft_strlcpy.c	ft_tolower.c \
		  ft_isalpha.c	ft_memcmp.c	ft_putstr_fd.c	ft_strlen.c	ft_toupper.c \
		  ft_isascii.c	ft_memcpy.c	ft_strncmp.c	ft_strtrim.c	ft_split.c	ft_strmapi.c \
		  ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c 	ft_lstlast.c	ft_lstadd_back.c \
		  ft_lstdelone.c	ft_lstclear.c	ft_lstiter.c	ft_lstmap.c

OBJ		= ft_isdigit.o	ft_memmove.o	ft_strchr.o	ft_strnstr.o \
		  ft_atoi.o	ft_isprint.o	ft_memset.o	ft_strdup.o	ft_strrchr.o \
		  ft_bzero.o	ft_itoa.o	ft_putchar_fd.o	ft_strjoin.o \
		  ft_calloc.o	ft_memccpy.o	ft_putendl_fd.o	ft_strlcat.o	ft_substr.o \
		  ft_isalnum.o	ft_memchr.o	ft_putnbr_fd.o	ft_strlcpy.o	ft_tolower.o \
		  ft_isalpha.o	ft_memcmp.o	ft_putstr_fd.o	ft_strlen.o	ft_toupper.o \
		  ft_isascii.o	ft_memcpy.o	ft_strncmp.o	ft_strtrim.o	ft_split.o	ft_strmapi.o \
		  ft_lstnew.o	ft_lstadd_front.o	ft_lstsize.o	ft_lstlast.o	ft_lstadd_back.o \
		  ft_lstdelone.o	ft_lstclear.o	ft_lstiter.o	ft_lstmap.o

all: $(NAME)

$(NAME): $(OBJ) libft.h
	@$(CC) $(FLAGS) -c -I. $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:		fclean all