/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_players.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduval <dduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 17:31:01 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 18:03:19 by dduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game.h>

void	ft_print_player(t_player *player1, t_player *player2)
{
	WINDOW	*win;

	win = newwin(2, COLS, LINES - 2, 0);
	mvwprintfw(win, 0, 0, "%s : %d", player1->name, player1->life);
	wrefresh(win);
	wdel(win);
	win = newwin(2, COLS, 0, 0);
	mvwprintfw(win, 0, 0, "%s : %d", player2->name, player2->life);
	wrefresh(win);
	wdel(win);
}
