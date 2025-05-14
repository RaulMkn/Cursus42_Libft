# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 19:11:54 by rmakende          #+#    #+#              #
#    Updated: 2025/05/14 21:12:23 by rmakende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

AR = ar

ARFLAGS = -rc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalnum.c\
	   ft_isascii.c\
	   ft_isprint.c\
	   ft_strlen.c\
	   ft_memset.c\
	   ft_bzero.c\
	   ft_memcpy.c\
	   ft_memmove.c\
	   ft_strlcpy.c\
	   ft_strlcat.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_strchr.c\
	   ft_strrchr.c\
	   ft_strncmp.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_strnstr.c\
	   ft_atoi.c\
	   ft_calloc.c\
	   ft_strdup.c\
	   ft_substr.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_split.c\
	   ft_itoa.c\
	   ft_strmapi.c\
	   ft_striteri.c\
	   ft_putchar_fd.c\
	   ft_putstr_fd.c\
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c\
	   ft_free_split.c\
	   ft_strcpy.c\
	   ft_strspn.c\
	   ft_cleaner.c\
	   get_next_line.c\
	   get_next_line_utils.c\
	   ft_printf.c\
	   ft_printf_utils.c

BONUS = ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

BNS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(BNS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(BNS)

clean:
	$(RM) $(OBJS) $(BNS)

fclean: clean
	$(RM) $(NAME) $(BNS)

re: fclean all
.PHONY: all fclean re clean