# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmira <kmira@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/12 11:40:08 by kmira             #+#    #+#              #
#    Updated: 2019/02/21 19:56:38 by kmira            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft_old.so
FLAGS	= -c -fPIC
FUNCS	=	atoi \
			bzero \
			isalnum \
			isalpha \
			isascii \
			isdigit \
			isprint \
			memccpy \
			memchr \
			memcmp \
			memcpy \
			memmove \
			memset \
			strcat \
			strchr \
			strcmp \
			strcpy \
			strdup \
			strlcat \
			strlen \
			strncat \
			strncmp \
			strncpy \
			strnstr \
			strrchr \
			strstr \
			tolower \
			toupper \
			itoa \
			memalloc \
			memdel \
			putchar_fd \
			putchar \
			putendl_fd \
			putendl \
			putnbr_fd \
			putnbr \
			putstr_fd \
			putstr \
			strclr \
			strdel \
			strequ \
			strnequ \
			striter \
			striteri \
			strjoin \
			strmap \
			strmapi \
			strnew \
			strsplit \
			strsub \
			strtrim \
			lstadd \
			lstdel \
			lstdelone \
			lstiter \
			lstmap \
			lstnew \
			digit_amount \
			is_whitespace
C_FILES	= $(addsuffix .c, $(addprefix ft_, $(FUNCS)))
OBJ		= $(addsuffix .o, $(addprefix ft_, $(FUNCS)))

all: $(NAME)

$(NAME) : $(OBJ)
	gcc $(OBJ) -shared -o $(NAME)

$(OBJ) :
	gcc -c -fPIC $(C_FILES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
