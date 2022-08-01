SRCS = ft_atoi.c \
		ft_strdup.c \
		ft_strlen.c \

CC = gcc
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

AR = ar rcs

RM = rm -f

NAME = libft.a


all: $(NAME)
	@echo "\e[1;96mCompilation Successfull ! ✅ \e[0m"
	
$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS) 
	

clean:
	
	@rm -f $(OBJS)
	clear
	
	@echo "\e[5;96m🧽$<\e[0m  \e[1;96mClean By Yatamago Corp  \e[5;96m🧽"
	@echo -e

fclean: 
	
	$(RM) $(NAME) $(OBJS)
	clear
	@echo "\e[5;96m🧽$<\e[0m  \e[1;96mFclean By Yatamago Corp  \e[5;96m🧽"
	@echo -e



re : fclean all

.PHONY : clean fclean