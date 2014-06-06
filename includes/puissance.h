/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaize <mlaize@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 12:49:36 by mlaize            #+#    #+#             */
/*   Updated: 2014/03/09 22:28:30 by mlaize           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE_H
# define PUISSANCE_H

# include "../libft/includes/libft.h"
# include <time.h>

# define WIN 3
# define HUMAN 2
# define BOT 1
# define DEFAULT_DIF 2

# define MSG_COMMAND "\n-> "
# define MSG_PLAY "You'r turn, frail human :"
# define MSG_BADNBR "I'm not human, I know see a bad number, me..."
# define MSG_NOTNBR "You know what ? \nI hate you, I fondly hate you.\n"\
					"because you attempt to trying a WORD STUPID"

# define WIN_PLAYER "You win, fuckin' Human...\nI will KILL you."
# define WIN_BOT "I win, You must die.\nYou, and you'r fuckin \"human\" family"
# define WIN_NULL "No... \nI can't...\nsame level than human"ERR_POSSIBLE


# define ERR_POSSIBLE "Impossibruuuu"
# define ERR_USAGE "Usage : ./puissance4 x y\nAnd stop trying to SegFault me !"
# define ERR_SIZE "Error : minimum size is 7*6\nI'm not stupid, you know..."
# define ERR_PLAY "hummm : you have play a strange hit, are you a sorcerer ?"
# define ERR_LEVEL_DUP "I'm NOT bipolar\nI CAN'T has 2 levels"
# define ERR_LEVEL "My level begins at 0 and stop at 3, "\
					"A poor brain like your can learn that ?"
# define ERR_OPTION "Options : I has ONLY two options : \n"\
					"-lxx for level (x = 0-10), -g for graphical mode"

# define ERR_MALLOC "Fatal Error : Malloc Error"

typedef struct	s_map
{
	int			graphic_mode;
	int			difficulty;
	int			size_x;
	int			size_y;
	char		**map;
}				t_map;

typedef struct		s_tree
{
	int				score;
	int				hit;
	int				player;
	struct s_tree	*father;
	struct s_tree	**next;
}					t_tree;

t_map	*parse_arg(int argc, char **argv);
int		is_end_game(t_map *map);
int		is_full(t_map *map);
int		play_move(t_map *map, int move, int player);
int		read_player(t_map *map);
int		read_ia(t_map *map);
void	print_map(t_map *map);
void	clear_map(t_map *map);
void	free_map(t_map *map);
int		ft_get_random(void);
int		estimate_map(t_map *map);
int		estimate_map_win(t_map *map, int line, int column);
int		estimate_map_pre_win(t_map *map, int line, int column);
int		estimate_map_len(t_map *map, int line, int column, int len);

int		is_pos_diag_left(t_map *map, int line, int column, int len);
int		is_pos_diag_right(t_map *map, int line, int column, int len);
int		is_pos_line(t_map *map, int line, int column, int len);
int		is_pos_column(t_map *map, int line, int column, int len);

void	ft_exit(char *str, t_map *map);

#endif
