/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:12:58 by dduval            #+#    #+#             */
/*   Updated: 2015/03/03 16:59:30 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/types.h>
# include <sys/uio.h>
# define BUFF_SIZE 1

typedef struct		s_fd
{
	int				fd;
	char			*original_ptr;
	char			*current_ptr;
	struct s_fd		**begin;
	struct s_fd		*next;
	struct s_fd		*prev;
}					t_fd;

int		get_next_line(int const fd, char **line);

#endif
