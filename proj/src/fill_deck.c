/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_deck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduval <dduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 18:17:13 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 18:30:25 by dduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game.h>

t_deck	*ft_fill_deck(t_trap *trap, t_magic *magic, t_beast *beast)
{
	t_deck	*deck;
	t_card	*card;
	t_card	*tmp;

	deck = (t_deck *)malloc(sizeof(t_deck));
	card = (t_card *)malloc(sizeof(t_card));
	card->type = TRAP;
	card->id = 0;
	card->trap = trap;
	card->prev = NULL;
	card->next = NULL;
	trap = trap->next;
	while(trap || magic || beast)
	{
		new = (t_card *)malloc(sizeof(t_card));
		new->current = trap;
		new->id = trap->id;
		new->next = NULL;
		new->prev = card;
		card->next = new;
		if (trap)
		{
			new->type = TRAP;
			trap = trap->next;
		}
		else if (magic)
		{
			new->type = MAGIC;
			magic = magic->nexct;
		}
		else if (beast)
		{
			beast->type = BEAST;
			beast = beast->next;
		}
		card = card->next;
	}
	while (card->prev)
		card = card->prev;
	return (card);
}
