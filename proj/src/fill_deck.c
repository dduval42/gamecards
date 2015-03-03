/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_deck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduval <dduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 18:17:13 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 19:43:21 by dduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game.h>

t_deck	*ft_fill_deck(t_trap *trap, t_magic *magic, t_beast *beast)
{
	t_deck	*deck;
	t_deck	*card;
	t_deck	*new;

	card = (t_deck *)malloc(sizeof(t_deck));
	card->current.type = TRAP;
	card->current.id = 0;
	card->current.trap = trap;
	card->prev = NULL;
	card->next = NULL;
	trap = trap->next;
	while(trap /*|| magic || beast*/)
	{
		new = (t_deck *)malloc(sizeof(t_deck));
		new->current.type = TRAP;
		new->current.id = trap->id;
		new->next = NULL;
		new->prev = card;
		card->next = new;
		if (trap)
		{
			new->current.type = TRAP;
			trap = trap->next;
		}
		/*else if (magic)
		{
			new->current.type = MAGIC;
			magic = magic->next;
		}
		else if (beast)
		{
			new->current.type = BEAST;
			beast = beast->next;
		}
		*/card = card->next;
	}
	while (card->prev)
		card = card->prev;
	return (card);

//	return(NULL);
}
