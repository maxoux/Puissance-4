# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaize <mlaize@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/31 12:40:37 by mlaize            #+#    #+#              #
#    Updated: 2014/03/09 13:33:47 by mlaize           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Werror -Wextra -Wall -O3

CC = gcc

SRCDIR = src

OBJDIR = obj

HEAD = includes

SRC = ft_memset.c		\
	  ft_bzero.c		\
	  ft_memcpy.c		\
	  ft_memccpy.c		\
	  ft_memmove.c		\
	  ft_memchr.c		\
	  ft_memcmp.c		\
	  ft_strlen.c		\
	  ft_strdup.c		\
	  ft_strcpy.c		\
	  ft_strncpy.c		\
	  ft_strcat.c		\
	  ft_strncat.c		\
	  ft_strlcat.c		\
	  ft_strchr.c		\
	  ft_strrchr.c		\
	  ft_strstr.c		\
	  ft_strnstr.c		\
	  ft_strcmp.c		\
	  ft_strncmp.c		\
	  ft_atoi.c			\
	  ft_isalpha.c		\
	  ft_isdigit.c		\
	  ft_isnumber.c		\
	  ft_isalnum.c		\
	  ft_isascii.c		\
	  ft_isprint.c		\
	  ft_toupper.c		\
	  ft_tolower.c		\
	  ft_memalloc.c		\
	  ft_memdel.c		\
	  ft_strnew.c		\
	  ft_strdel.c		\
	  ft_strclr.c		\
	  ft_striter.c		\
	  ft_striteri.c		\
	  ft_strmap.c		\
	  ft_strmapi.c		\
	  ft_strequ.c		\
	  ft_strnequ.c		\
	  ft_strsub.c		\
	  ft_strjoin.c		\
	  ft_strtrim.c		\
	  ft_strsplit.c 	\
	  ft_itoa.c			\
	  ft_putchar.c		\
	  ft_putstr.c		\
	  ft_putendl.c		\
	  ft_putnbr.c		\
	  ft_putchar_fd.c	\
	  ft_putstr_fd.c	\
	  ft_putendl_fd.c	\
	  ft_putnbr_fd.c	\
	  ft_lstnew.c		\
	  ft_lstdelone.c	\
	  ft_lstdel.c		\
	  ft_lstadd.c		\
	  ft_lstiter.c		\
	  ft_lstmap.c		\
	  ft_pow.c			\
	  ft_memappend.c	\
	  ft_lstaddend.c	\
	  ft_isreadable.c	\
	  ft_putlst.c		\
	  ft_lstlen.c		\
	  ft_strealloc.c	\
	  ft_cutstr.c		\
	  ft_strchri.c		\
	  ft_firstword.c	\
	  ft_free_split.c	\
	  ft_putnchar.c		\
	  get_next_line.c	

SRC := $(addprefix $(SRCDIR)/, $(SRC))

OBJ = $(SRC:$(SRCDIR)%.c=$(OBJDIR)%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "finalisation de $(NAME) ..."
	@ranlib $(NAME)
	@echo "Complete !"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) $(FLAGS) -I$(HEAD) -c -o $@ $^
	@ar rc $(NAME) $@
	@echo "compilation de $@ ..."

clean:
	@-rm -rf $(OBJ)
	@echo "suppresion des objets ..."

fclean: clean
	@-rm -rf $(NAME)
	@echo "suppression de $(NAME) ..."

re:
	@echo "reactualisation de $(NAME) ..."
	@make fclean
	@make all

.PHONY: all clean fclean re
