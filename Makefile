# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ziharuty <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 17:13:18 by ziharuty          #+#    #+#              #
#    Updated: 2023/02/01 14:58:24 by ziharuty         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_BONUS = ft_lstnew.c \
			 	ft_lstadd_front.c \
			    ft_lstsize.c \
			   	ft_lstlast.c \
				ft_lstadd_back.c \
			   	ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

SRCS = $(filter-out $(SRCS_BONUS), $(wildcard *.c))

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar -rcs

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus : $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS_BONUS)

clean :
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean bonus re
