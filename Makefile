# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaize <mlaize@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/24 10:19:42 by mlaize            #+#    #+#              #
#    Updated: 2014/03/09 22:25:59 by mlaize           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = puissance4

SRC = main.c			\
	  estimate_map.c	\
	  free_map.c		\
	  ft_exit.c			\
	  ft_get_random.c	\
	  is_end_game.c		\
	  is_full.c			\
	  is_possible.c		\
	  map_calcul.c		\
	  parse_arg.c		\
	  play_move.c		\
	  print_clear_map.c	\
	  read_ia.c			\
	  read_player.c

SRCDIR = src/

OBJDIR = obj/

HEADDIR = includes/

LIBDIR = libft/

SRC := $(addprefix $(SRCDIR), $(SRC))

OBJ = $(SRC:$(SRCDIR)%.c=$(OBJDIR)%.o)

CC = clang

FLAGS = -Wextra -Wall -Werror

$(NAME): all

all: $(OBJ)
	@make -C $(LIBDIR) all
	@echo "finalisation de $(NAME)..."
	@$(CC) $(FLAGS) $(OBJ) $(LIBDIR)libft.a -I$(HEADDIR) -o $(NAME)

$(OBJDIR)%.o: $(SRCDIR)%.c
	@echo "compilation de $^..."
	@$(CC) $(FLAGS) -I$(LIBDIR)includes -I$(HEADDIR) -c -o $@ $^

clean:
	@echo "suppression des objets..."
	@-rm $(OBJ)

fclean: clean
	@-rm $(NAME)

ffclean: fclean
	make -C $(LIBDIR) fclean

re:
	@echo "recompilation : Full"
	@make -C $(LIBDIR) re
	@make fclean
	@make all

relite:
	@echo "recompilation : Lite"
	@make fclean
	@make all

.PHONY: all clean fclean ffclean re relite
