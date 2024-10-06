# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 19:57:45 by moleksan          #+#    #+#              #
#    Updated: 2024/01/29 20:26:43 by moleksan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   libftprintf.a
SRCS	=	ft_printf.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putptr.c \
			ft_putnbr.c \
			ft_putunbr.c \
			ft_puthexlow.c \
			ft_puthexupp.c \

OBJS	= $(SRCS:.c=.o)

RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

$(NAME): ${OBJS} 
	${LIBC} $(NAME) $(OBJS) 

all: $(NAME)

fclean: clean
	$(RM) $(NAME) 

clean:
	$(RM) -f $(OBJS) 
    
re: fclean all

.PHONY: all clean fclean re .c.o