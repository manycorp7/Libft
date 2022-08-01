SRCS = ft_atoi.c \
		ft_strdup.c \
		ft_strlen \

CC = gcc
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

AR = ar rcs

RM = rm -f

NAME = libft.a


all: $(NAME)
$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 
	@echo "Ta Perdue"

fclean: clean 
	$(RM) $(NAME)
	@echo "j'ai gagner"

re : fclean all

.PHONY : clean fclean