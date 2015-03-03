/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduval <dduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 13:25:35 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 19:50:14 by dduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game.h>

t_deck	*ft_fill_hand(t_deck *deck)
{
	t_deck	*hand;
	t_deck	*new;
	int		i;

	hand = (t_deck *)malloc(sizeof(t_deck));
	hand->current = deck->current;
	hand->prev = NULL;
	hand->next = NULL;
	deck = deck->next;
	i = 1;
	while (i < 5)
	{
		new = (t_deck *)malloc(sizeof(t_deck));
		new->current = deck->current;
		new->next = NULL;
		new->prev = hand;
		hand->next = new;
		hand = hand->next;
		i++;
	}
	while(hand->prev)
		hand = hand->prev;
	return (hand);
}

int		main(void)
{
	ft_init_screen();
	t_databoard	*data;
	t_player	*player;
	t_beast	*beast;
	t_trap	*trap;
	t_magic	*magic;

	data = (t_databoard *)malloc(sizeof(t_databoard));
	player = (t_player *)malloc(sizeof(t_player));
	player->name = ft_strdup("name");
	player->life = 20;
	data->player1 = player;
	data->player2 = player;
	trap = ft_get_trap_cards();
	magic = ft_get_magic_cards();
	beast = ft_get_beast_cards();
	data->deck1 = ft_fill_deck(trap, magic, beast);
	data->deck2 = data->deck1;
	data->board1 = ft_fill_hand(data->deck1);
	data->board2 = ft_fill_hand(data->deck2);
	data->hand1 = ft_fill_hand(data->deck1);
	data->hand2 = ft_fill_hand(data->deck2);
	ft_print_board(data);
	sleep(90);
	endwin();
	return (0);
}
