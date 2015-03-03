/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_spec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduval <dduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 17:05:46 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 20:02:13 by dduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game.h>
#include <functions.h>
void	ft_print_magic(WINDOW *win, t_card card)
{
	mvwprintw(win, NAMEPOS, "%s", card.magic->name);
	mvwprintw(win, COASTPOS, "%d", card.magic->coast);
	mvwprintw(win, DESCPOS, "%s", card.magic->desc);
	mvwprintw(win, ELEMPOSE, "%s", card.magic->elem);
}

void	ft_print_trap(WINDOW *win, t_card card)
{
	mvwprintw(win, NAMEPOS, "%s", /*card.trap->name*/ "trap");
//	mvwprintw(win, COASTPOS, "%d", card.trap->coast);
//	mvwprintw(win, DESCPOS, "%s", card.trap->desc);
}

void	ft_print_beast(WINDOW *win, t_card card)
{
//	mvwprintw(win, NAMEPOS, "%s", card.beast->name);
//	mvwprintw(win, COASTPOS, "%d", card.beast->coast);
//	mvwprintw(win, DESCPOS, "%s", card.beast->desc);
//	mvwprintw(win, ELEMPOSE, "%s", card.beast->elem);
//	mvwprintw(win, TYPEPOSE, "%s", card.beast->type);
//	mvwprintw(win, ATKPOS, "%d", card.beast->atk);
//	mvwprintw(win, LIFEPOS, "%s", card.beast->life);
}
