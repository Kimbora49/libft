# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/27 17:57:24 by tmazan            #+#    #+#              #
#    Updated: 2024/05/30 16:33:24 by tmazan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_atoi.c ft_isalnum.c  ft_isprint.c  ft_isalpha.c  ft_memmove.c  ft_memcmp.c \
					ft_strncmp.c  ft_memchr.c  ft_strchr.c  ft_strrchr.c \
					ft_tolower.c  ft_bzero.c  ft_isascii.c  ft_strnstr.c  ft_strlcpy.c \
					ft_strlen.c ft_memset.c  ft_strlcat.c  ft_strdup.c  ft_calloc.c  ft_split.c \
					ft_toupper.c ft_isdigit.c ft_memcpy.c  ft_substr.c  ft_strjoin.c  ft_strtrim.c \
					ft_striteri.c  ft_putchar_fd.c  ft_strmapi.c  ft_itoa.c  ft_putstr_fd.c  ft_putnbr_fd.c \
					ft_putendl_fd.c \
					

HEADER=libft.h

OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
					ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c  \
					ft_lstmap_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c
BONUS_OBJS		= $(BONUS:.c=.o)

%.c%.o:
	${CC} ${CFLAGS} -c ${HEADER} $< -o ${<:.c=.o}

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS) ${HEADER}
				ar rc $(NAME) $(OBJS)
				
clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:            all clean fclean re bonus