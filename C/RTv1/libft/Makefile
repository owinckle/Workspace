# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: owinckle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 17:34:23 by owinckle          #+#    #+#              #
#    Updated: 2016/04/06 10:30:29 by owinckle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strdup.c \
	   ft_strcpy.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_strrev.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_strsplit.c \
	   ft_itoa.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_putendl.c \
	   ft_putnbr.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_strncpy.c \
	   ft_isspace.c \
	   ft_swap.c \
	   first_word.c \
	   str_caps.c \
	   ft_strndup.c \
	   ft_lstnew.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_strxlen.c \
	   ft_sqrt.c \
	   ft_getnbr.c \
	   get_next_line.c \
	   ft_abs.c \
	   ft_lstpushback.c \
	   ft_lstlen.c \
	   ft_mix.c \
	   ft_putcharn.c \
	   debug.c \
	   ft_bs.c \
	   ft_strjoint.c \
	   ft_atoin.c \
	   ft_clamp.c

OBJS = $(SRCS:.c=.o)

INC = -I includes/

HDIR = includes/libft.h

all: $(NAME)

$(NAME): $(OBJS) $(HDIR)
		@ar rc $@ $^
		@ranlib $(NAME)

%.o: %.c $(HDIR)
		@gcc $(FLAGS) $(INC) -o $@ -c $<
	 

clean:
		@rm -rf $(OBJS)

fclean: clean
		@rm -rf $(NAME)

re: fclean all
