NAME = libft.a
OBJ = ft_isalpha.o ft_isalnum.o ft_bzero.o ft_atoi.o ft_calloc.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o \
	  ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strdup.o ft_strlcat.o ft_strlcpy.o ft_strlen.o \
	  ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_substr.o ft_strtrim.o  \
	  ft_split.o ft_strjoin.o\
	#   ft_strmapi.o ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_striteri.o ft_itoa.o

CC=gcc
AR=ar
ARFLAG= -rcs
CFLAGS= -c -Wall -Werror -Wextra

%.o: %.c libft.h
	$(CC) $(CFLAGS) $< -o $@

$(NAME) : $(OBJ)
	$(AR) $(ARFLAG) $(NAME) $(OBJ)

$(OBJ) : libft.h
$(BONU) : libft.h

all : $(NAME)

clean:
	rm -rf *.o

fclean:
	rm -rf *.o
	rm -rf $(NAME)

re : fclean all