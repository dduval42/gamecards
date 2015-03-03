/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduval <dduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 13:55:29 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 19:54:20 by dduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H
# include <libft.h>
# include <ncurses.h>
# define HEIGHTBOARD (LINES / 4) - 4
# define HEIGHTCARD LINES / 4
# define WIDHTCARD COLS / 8
# define NAMEPOS 2, 2
# define DESCPOS 4, 2
# define ATKPOS 6, 10
# define LIFEPOS 6, 5
# define COASTPOS 0, 0
# define TYPEPOSE 3,2
# define ELEMPOSE 5, 2
# define MAGIC 1
# define TRAP 2
# define BEAST 3
# define BACKCARD 0
typedef	struct	s_effects
{

}				t_effects;

typedef	struct		s_trap
{
	int				id;
	char			*name;
	char			*desc;
	int				coast;
	int				effect;
	struct	s_trap	*next;
	struct	s_trap	*prev;
}					t_trap;

typedef	struct		s_magic
{
	int				id;
	char			*name;
	char			*desc;
	int				coast;
	int				effect;
	char			*elem;
	struct	s_magic	*next;
	struct	s_magic	*prev;
}					t_magic;

typedef	struct		s_beast
{
	int				id;
	char			*name;
	char			*desc;
	int				coast;
	int				life;
	int				effect;
	int				atk;
	char			*type;
	char			*elem;
	struct	s_beast	*next;
	struct	s_beast	*prev;
}					t_beast;

typedef	struct		s_card
{
	int				type;
	int				id;
	t_trap			*trap;
	t_magic			*magic;
	t_beast			*beast;
}					t_card;

typedef	struct		s_player
{
	char			*name;
	char			*mdp;
	int				level;
	int				life;
	int				gold;
}					t_player;

typedef	struct		s_deck
{
	struct s_deck	*next;
	t_card			current;
	struct	s_deck	*prev;
}					t_deck;

typedef	struct		s_databoard
{
	t_player		*player1;
	t_deck			*deck1;
	t_deck			*cim1;
	t_deck			*hand1;
	t_deck			*board1;
	t_player		*player2;
	t_deck			*deck2;
	t_deck			*cim2;
	t_deck			*hand2;
	t_deck			*board2;
}					t_databoard;

char		**ft_get_trap(char *path);
t_trap		*ft_get_trap_cards(void);
t_beast		*ft_get_beast_cards(void);
t_magic		*ft_get_magic_cards(void);
t_deck		*ft_fill_deck(t_trap *trap, t_magic *magic, t_beast *beast);
void		ft_init_screen(void);
void		ft_print_board(t_databoard *data);
void		ft_print_adv_board(t_deck *cards);
void		ft_print_my_board(t_deck *cards);
void		ft_print_my_line(t_deck *cards);
void		ft_print_adv_line(t_deck *cards);
void		ft_print_player(t_player *player1, t_player *player2);
void		ft_print_magic(WINDOW *win, t_card card);
void		ft_print_trap(WINDOW *win, t_card card);
void		ft_print_beast(WINDOW *win, t_card card);

# endif
