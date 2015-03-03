/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cards.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduval <dduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 15:52:50 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 19:20:44 by dduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <game.h>
#include <functions.h>
char		**ft_get_trap(char *path)
{
	char *line;
	char **tmp;
	int i;
	int fd;

	fd = open(path, O_RDONLY);
	printf("fd = %d\n", fd);
	while (get_next_line(fd, &line) > 0)
		i++;
	tmp = (char**)malloc(sizeof(char *) * i + 1);
	close(fd);
	i = 0;
	fd = open(path, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		tmp[i++] = ft_strdup(line);
	tmp[i] = NULL;
	close(fd);
	return (tmp);
}



t_trap		*ft_get_trap_cards(void)
{
	char	**content;
	char	**tmp;
	t_trap	*card;
	int		i;
	t_trap	*new;

	i = 1;
	card = (t_trap *)malloc(sizeof(t_trap));
	content = ft_get_trap("./cards/trap.txt");
	tmp = ft_strsplit(content[0], ':');
	card->coast = ft_atoi(tmp[2]);
	card->desc = ft_strdup(tmp[1]);
	card->name = ft_strdup(tmp[0]);
	card->effect = ft_atoi(tmp[3]);
	card->id = 0;
	card->next = NULL;
	card->prev = NULL;
	ft_free_tab(tmp);
	while (content[i])
	{
		tmp = ft_strsplit(content[i], ':');
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
	return (card);
}

t_magic		*ft_get_magic_cards(void)
{
	char	**content;
	char	**tmp;
	t_magic	*card;
	int		i;
	t_magic	*new;

	i = 1;
	card = (t_magic *)malloc(sizeof(t_magic));
	content = ft_get_trap("./cards/magic.txt");
	tmp = ft_strsplit(content[0], ':');
	card->coast = ft_atoi(tmp[2]);
	card->desc = ft_strdup(tmp[1]);
	card->name = ft_strdup(tmp[0]);
	card->effect = ft_atoi(tmp[3]);
	card->elem = ft_strdup(tmp[4]);
	card->id = 0;
	card->next = NULL;
		card->prev = NULL;
	ft_free_tab(tmp);
	while (content[i])
	{
		tmp = ft_strsplit(content[i], ':');
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
	return (card);
}

t_beast		*ft_get_beast_cards(void)
{
	char	**content;
	char	**tmp;
	t_beast	*card;
	int		i;
	t_beast	*new;

	i = 1;
	card = (t_beast *)malloc(sizeof(t_beast));
	content = ft_get_trap("./cards/beast.txt");
	tmp = ft_strsplit(content[0], ':');
	card->name = ft_strdup(tmp[0]);
	card->desc = ft_strdup(tmp[1]);
	card->coast = ft_atoi(tmp[2]);
	card->life = ft_atoi(tmp[3]);
	card->effect = ft_atoi(tmp[4]);
	card->atk = ft_atoi(tmp[5]);
	card->type = ft_strdup(tmp[6]);
	card->elem = ft_strdup(tmp[7]);
	card->id = 0;
	card->next = NULL;
	card->prev = NULL;
	ft_free_tab(tmp);
	while (content[i])
	{
		tmp = ft_strsplit(content[i], ':');
		new = (t_beast *)malloc(sizeof(t_beast));
		new->name = ft_strdup(tmp[0]);
		new->desc = ft_strdup(tmp[1]);
		new->coast = ft_atoi(tmp[2]);
		new->life = ft_atoi(tmp[3]);
		new->effect = ft_atoi(tmp[4]);
		new->atk = ft_atoi(tmp[5]);
		new->type = ft_strdup(tmp[6]);
		new->elem = ft_strdup(tmp[7]);
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
	return (card);
}

// int			main(void)
// {
// 	t_beast	*beast;
// 	t_magic	*magics;
// 	t_trap	*trap;

// 	trap = ft_get_trap_cards();
// 	magics = ft_get_magic_cards();
// 	beast = ft_get_beast_cards();
// 	//ft_print_tab(ft_get_trap("./cards/magic.txt"));
// 	int i;

// 	i = 0;
// 	while (beast)
// 	{
// 		printf("\nle nom est :%s\n\n", beast->name);
// 		printf("\nDescription : %s\n\n", beast->desc);
// 		printf("\nle cout de la carte : %d\n\n", beast->coast);
// 		printf("\nnombre de pv : %d\n\n", beast->life);
// 		printf("\nnumero d'effet : %d\n\n", beast->effect);
// 		printf("\nnombre d'atk : %d\n\n", beast->atk);
// 		printf("\ntype de la carte : %s\n\n", beast->type);
// 		printf("\ntype d'element : %s\n\n", beast->elem);
// 		printf("\nid de la carte : %d\n\n", beast->id);
// 		beast = beast->next;
// 	}

// 	return 0;
// }
