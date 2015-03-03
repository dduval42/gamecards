/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cards.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 15:52:50 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 18:24:34 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game.h>


// void		ft_free_tab(char **tab)
// {
// 	int i;

// 	i = 0;
// 	while (tab[i])
// 	{
// 		free(tab[i]);
// 		i++;
// 	}
// 	free(tab);
// }

char		**ft_get_trap(char *path)
{
	char *line;
	char **tmp;
	char **content;
	int i;
	int fd;

	fd = open(path, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		i++;
	tmp = (char**)malloc(sizeof(char) * i + 2);
	content = (char**)malloc(sizeof(char) * i + 2);
	close(fd);
	i = 0;
	fd = open(path, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		tmp[i] = ft_strdup(line);
		i++;
	}
	close(fd);
	retrun (tmp);
}



t_trap		*ft_get_trap_cards(void)
{
	char	**content;
	char	**tmp
	t_trap	*card;
	int		i;
	t_trap	*new;

	i = 1;
	card = (t_trap *)malloc(sizeof(t_trap));
	content = ft_get_trap("../../cards/card.txt");
	tmp = ft_strsplit(content[0]);
	card->coast = ft_atoi(tmp[2]);
	card->desc = ft_strdup(tmp[1]);
	card->name = ft_strdup(tmp[0]);
	card->effect = ft_atoi(tmp[3]);
	cards->id = 0;
	card->next = NULL;
	ft_free_tab(tmp);
	while (content[i])
	{
		tmp = ft_strsplit(conent);
		new = (t_trap *)malloc(sizeof(t_trap));
		new->coast = ft_atoi(tmp[2]);
		new->desc = ft_strdup(tmp[1]);
		new->name = ft_strdup(tmp[0]);
		new->effect = ft_atoi(tmp[3]);
		new->id = i;
		new->next = NULL;
		new->prev = card;
		card->next = new;
		card = card->next;
		ft_free_tab(tmp);
		i++;
	}
	while (card->prev)
		card = card->prev;
	retrun (card);
}

t_magic		*ft_get_magic_cards(void)
{
	char	**content;
	char	**tmp
	t_magic	*card;
	int		i;
	t_magic	*new;

	i = 1;
	card = (t_magic *)malloc(sizeof(t_magic));
	content = ft_get_trap("../../cards/card.txt");
	tmp = ft_strsplit(content[0]);
	card->coast = ft_atoi(tmp[2]);
	card->desc = ft_strdup(tmp[1]);
	card->name = ft_strdup(tmp[0]);
	card->effect = ft_atoi(tmp[3]);
	card->elem = ft_strdup(tmp[4]);
	cards->id = 0;
	card->next = NULL;
	ft_free_tab(tmp);
	while (content[i])
	{
		tmp = ft_strsplit(conent);
		new = (t_magic *)malloc(sizeof(t_magic));
		new->coast = ft_atoi(tmp[2]);
		new->desc = ft_strdup(tmp[1]);
		new->name = ft_strdup(tmp[0]);
		new->effect = ft_atoi(tmp[3]);
		new->elem = ft_strdup(tmp[4]);
		new->id = i;
		new->next = NULL;
		new->prev = card;
		card->next = new;
		card = card->next;
		ft_free_tab(tmp);
		i++;
	}
	while (card->prev)
		card = card->prev;
	retrun (card);
}

t_beast		*ft_get_beast_cards(void)
{
	char	**content;
	char	**tmp
	t_beast	*card;
	int		i;
	t_beast	*new;

	i = 1;
	card = (t_beast *)malloc(sizeof(t_beast));
	content = ft_get_trap("../../cards/card.txt");
	tmp = ft_strsplit(content[0]);
	card->name = ft_strdup(tmp[0]);
	card->desc = ft_strdup(tmp[1]);
	card->coast = ft_atoi(tmp[2]);
	card->life = ft_atoi(tmp[3]);
	card->effect = ft_atoi(tmp[4]);
	card->atk = ft_atoi(tmp[5])
	card->type = ft_atoi(tmp[6]);
	card->elem = ft_atoi(tmp[7]);
	cards->id = 0;
	card->next = NULL;
	ft_free_tab(tmp);
	while (content[i])
	{
		tmp = ft_strsplit(conent);
		new = (t_beast *)malloc(sizeof(t_beast));
		new->name = ft_strdup(tmp[0]);
		new->desc = ft_strdup(tmp[1]);
		new->coast = ft_atoi(tmp[2]);
		new->life = ft_atoi(tmp[3]);
		new->effect = ft_atoi(tmp[4]);
		new->atk = ft_atoi(tmp[5])
		new->type = ft_atoi(tmp[6]);
		new->elem = ft_atoi(tmp[7]);
		new->id = i;
		new->next = NULL;
		new->prev = card;
		card->next = new;
		card = card->next;
		ft_free_tab(tmp);
		i++;
	}
	while (card->prev)
		card = card->prev;
	retrun (card);
}
