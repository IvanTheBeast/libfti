# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdenna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 15:30:33 by mabdenna          #+#    #+#              #
#    Updated: 2021/11/21 20:51:05 by mabdenna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_bzero.c\
        ft_calloc.c\
        ft_isalpha.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_strmapi.c\
		ft_itoa.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putnbr_fd.c\
		ft_putendl_fd.c\
		ft_putstr_fd.c\
        ft_isdigit.c\
        ft_isascii.c\
        ft_isalnum.c\
        ft_isprint.c\
        ft_memcpy.c\
        ft_memmove.c\
        ft_memset.c\
		ft_memcmp.c\
        ft_memchr.c\
        ft_strlcat.c\
        ft_strlcpy.c\
        ft_strlen.c\
        ft_strchr.c\
        ft_strdup.c\
        ft_strncmp.c\
        ft_strnstr.c\
        ft_strrchr.c\
        ft_atoi.c\
        ft_toupper.c\
        ft_tolower.c\

all:
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rc libft.a *.o

so:
	gcc -Wall -Wextra -Werror -fPIC $(SRCS)
	gcc -shared -o libft.so *.o

clean	: 
	rm -f *.o
fclean : clean
	rm -f libft.a

re        : fclean all
