/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_card_board.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduval <dduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 14:40:27 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 20:01:43 by dduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game.h>

void	ft_print_adv_board(t_deck *cards)
{
	WINDOW	*win;
	int		i;

	i = 1;
	while (cards)
	{
		win = newwin(HEIGHTBOARD / 4, COLS / 8, 2, (COLS / 8) * i);
		wborder(win, ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_HLINE,
		ACS_ULCORNER, ACS_URCORNER, ACS_LLCORNER, ACS_LRCORNER);
		wbkgd(win, BACKCARD);
		wrefresh(win);
		delwin(win);
		cards = cards->next;
		i++;
	}
}

void	ft_print_my_board(t_deck *cards)
{
	WINDOW	*win;
	int		i;

	i = 1;
	while (cards)
	{
		win = newwin(HEIGHTBOARD / 4, COLS / 8,
			2 + 3 *(HEIGHTBOARD / 4), (COLS / 8) * i);
		wborder(win, ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_HLINE,
		ACS_ULCORNER, ACS_URCORNER, ACS_LLCORNER, ACS_LRCORNER);
		if (cards->current.type == MAGIC)
			ft_print_magic(win, cards->current);
		else if (cards->current.type == TRAP)
			ft_print_trap(win, cards->current);
		else if (cards->current.type == BEAST)
			ft_print_beast(win, cards->current);
		wrefresh(win);
		delwin(win);
		cards = cards->next;
		i++;
	}
}

void	ft_print_my_line(t_deck *cards)
{
	WINDOW	*win;
	int		i;

	i = 1;
	while (cards)
	{
		win = newwin(HEIGHTBOARD / 4, COLS / 8,
			2 + 2 *(HEIGHTBOARD / 4), (COLS / 7) * i);
		wborder(win, ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_HLINE,
		ACS_ULCORNER, ACS_URCORNER, ACS_LLCORNER, ACS_LRCORNER);
		if (cards->current.type == MAGIC)
			ft_print_magic(win, cards->current);
		else if (cards->current.type == BEAST)
			ft_print_beast(win, cards->current);
				cards = cards->next;
		wrefresh(win);
		delwin(win);
		i++;
	}
}

void	ft_print_adv_line(t_deck *cards)
{
	WINDOW	*win;
	int		i;

	i = 1;
	while (cards)
	{
		win = newwin(HEIGHTBOARD / 4, COLS / 8,
			2 + (HEIGHTBOARD / 4), (COLS / 7) * i);
		wborder(win, ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_HLINE,
		ACS_ULCORNER, ACS_URCORNER, ACS_LLCORNER, ACS_LRCORNER);
		if (cards->current.type == MAGIC)
			ft_print_magic(win, cards->current);
		else if (cards->current.type == BEAST)
			ft_print_beast(win, cards->current);
				cards = cards->next;
		wrefresh(win);
		delwin(win);
		i++;
	}
}

