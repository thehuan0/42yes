NAME	= libft.a
FLAGS	= -Wall -Wextra -Werror
CC		= gcc

SRC		= ft_isdigit.c	ft_memmove.c	ft_strchr.c	ft_strnstr.c  \
		  ft_atoi.c	ft_isprint.c	ft_memset.c	ft_strdup.c	ft_strrchr.c \
		  ft_bzero.c	ft_itoa.c	ft_putchar_fd.c	ft_strjoin.c \
		  ft_calloc.c	ft_memccpy.c	ft_putendl_fd.c	ft_strlcat.c	ft_substr.c \
		  ft_isalnum.c	ft_memchr.c	ft_putnbr_fd.c	ft_strlcpy.c	ft_tolower.c \
		  ft_isalpha.c	ft_memcmp.c	ft_putstr_fd.c	ft_strlen.c	ft_toupper.c \
		  ft_isascii.c	ft_memcpy.c	ft_strncmp.c	ft_strtrim.c	ft_split.c	ft_strmapi.c

SRC_BONUS = ft_lstnew_bonus.c	ft_lstadd_front_bonus.c	ft_lstsize_bonus.c 	ft_lstlast_bonus.c \
		  ft_lstadd_back_bonus.c	ft_lstdelone_bonus.c	ft_lstclear_bonus.c	ft_lstiter_bonus.c \
		  ft_lstmap_bonus.c

OBJ		= ft_isdigit.o	ft_memmove.o	ft_strchr.o	ft_strnstr.o \
		  ft_atoi.o	ft_isprint.o	ft_memset.o	ft_strdup.o	ft_strrchr.o \
		  ft_bzero.o	ft_itoa.o	ft_putchar_fd.o	ft_strjoin.o \
		  ft_calloc.o	ft_memccpy.o	ft_putendl_fd.o	ft_strlcat.o	ft_substr.o \
		  ft_isalnum.o	ft_memchr.o	ft_putnbr_fd.o	ft_strlcpy.o	ft_tolower.o \
		  ft_isalpha.o	ft_memcmp.o	ft_putstr_fd.o	ft_strlen.o	ft_toupper.o \
		  ft_isascii.o	ft_memcpy.o	ft_strncmp.o	ft_strtrim.o	ft_split.o	ft_strmapi.o \
		 
OBJ_BONUS = ft_lstnew_bonus.o	ft_lstadd_front_bonus.o	ft_lstsize_bonus.o	ft_lstlast_bonus.o \
		  ft_lstadd_back_bonus.o	ft_lstdelone_bonus.o	ft_lstclear_bonus.o	ft_lstiter_bonus.o \
		  ft_lstmap_bonus.o

all: $(NAME)

$(NAME): $(OBJ) libft.h
	@$(CC) $(FLAGS) -c -I $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus: $(OBJ_BONUS) libft.h
	@$(CC) $(FLAGS) -c -I $(SRC_BONUS)
	@ar rc $(NAME) $(OBJ_BONUS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean:	clean
	@rm -f $(NAME)

re:		fclean all
