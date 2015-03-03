/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduval <dduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 17:24:05 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 19:55:49 by dduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game.h>
#include <functions.h>
void			ft_print_board(t_databoard *data)
{
	ft_print_adv_board(data->hand2);
	ft_print_adv_line(data->board2);
	ft_print_my_line(data->board1);
	ft_print_my_board(data->hand1);
	ft_print_player(data->player1, data->player2);
}
