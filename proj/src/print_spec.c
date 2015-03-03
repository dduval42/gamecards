/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_spec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduval <dduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 17:05:46 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 18:26:06 by dduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game.h>

void	ft_print_magic(WINDOW *win, t_card *card)
{
	mvwprintfw(win, NAMEPOS, "%s", card->name);
	mvwprintfw(win, COASTPOS, "%d", card->coast);
	mvwprintfw(win, DESCPOS, "%s", card->desc);
	mvwprintfw(win, ELEMPOSE, "%s", card->elem);
}

void	ft_print_trap(WINDOW *win, t_card *card)
{
	mvwprintfw(win, NAMEPOS, "%s", card->name);
	mvwprintfw(win, COASTPOS, "%d", card->coast);
	mvwprintfw(win, DESCPOS, "%s", card->desc);
}

void	ft_print_beast(WINDOW *win, t_card *card)
{
	mvwprintfw(win, NAMEPOS, "%s", card->name);
	mvwprintfw(win, COASTPOS, "%d", card->coast);
	mvwprintfw(win, DESCPOS, "%s", card->desc);
	mvwprintfw(win, ELEMPOSE, "%s", card->elem);
	mvwprintfw(win, TYPEPOSE, "%s", card->type);
	mvwprintfw(win, ATKPOS, "%d", card->atk);
	mvwprintfw(win, LIFEPOS, "%s", card->life);
}
