NAME = libft.a
INC = libft.h
MAN_SRCS = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_strdup.c ft_strlcpy.c ft_strnstr.c\
             ft_tolower.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_strlen.c ft_strrchr.c ft_toupper.c\
      ft_calloc.c ft_isdigit.c ft_memcmp.c ft_strjoin.c ft_strtrim.c ft_isalnum.c ft_isprint.c ft_memcpy.c\
          ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_strmapi.c ft_putstr_fd.c ft_striteri.c \
                ft_putendl_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_split.c ft_substr.c

BON_SRCS =  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	  		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

MAN_OBJS = $(MAN_SRCS:.c=.o)
BON_OBJS = $(BON_SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
AR = ar -r
RM = rm -f

all:$(NAME)
$(NAME) : $(MAN_OBJS)
	$(AR) $(NAME) $(MAN_OBJS)

%.o:%.c $(INC)
	$(CC) $(CFLAGS) -c $<

bonus:$(BON_OBJS) $(MAN_OBJS)
	$(AR) $(NAME) $(BON_OBJS) $(MAN_OBJS)

clean: 
	$(RM) $(BON_OBJS) $(MAN_OBJS)

fclean:clean
	$(RM) $(NAME)

re:fclean all

