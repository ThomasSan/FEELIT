/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsefile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 19:04:25 by mdebelle          #+#    #+#             */
/*   Updated: 2015/12/02 10:53:00 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "fillit.h"
#include "gnl.h"
#include <stdio.h>

int			ft_parse_error(int i, char *file)
{
	ft_putendl_fd("Error.", 2);
	return (0);
}

void			ft_newnode(t_lst **l, int i, int type)
{
	t_lst	*new;
	t_lst	*tmp;

	tmp = *l;
	if(!(new = (t_lst*)malloc(sizeof(t_lst))))
		return ;
	new->letter = (64 + (i / 5));
	new->used = 0;
	new->type = type;
	new->pos[0] = 0;
	new->pos[1] = 0;
	new->next = NULL;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

void		show_list(t_lst *l)
{
	while(l)
	{
		ft_putendl_fd(ft_itoa(l->type), 2);
		l = l->next;
	}
}

void		ft_firstnode(t_lst **l, int i, int type)
{
	(*l)->letter = (64 + (i / 5));
	(*l)->used = 0;
	(*l)->type = type;
	(*l)->pos[0] = 0;
	(*l)->pos[1] = 0;
	(*l)->next = NULL;
}

void		appendpiece(int i, t_lst **list, char *piece)
{
	int		type;

	if ((type = find_piece_type(piece)) == 0)
		exit (ft_piece_error(i / 5, "bad puzzle"));
	if (i / 5 == 1)
		ft_firstnode(list, i, type);
	else
		ft_newnode(list, i, type);
}

int			goodline(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '#' && str[i] != '.')
			return (0);
		i++;
	}
	if (i == 4 || i == 0)
		return (1);
	return (0);
}

int			checkfile(char *file, t_lst *list)
{
	int		fd;
	char	*line;
	int		i;
	char	*piece;
	int		nbpieces;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (0);
	i = 1;
	while(get_next_line(fd, &line) == 1)
	{
		if (goodline(line) == 1)
		{
			if (i % 5 != 0)
			{
				if (i%5 == 1)
					piece = ft_strdup(line);
				else 
					piece = ft_strjoin(piece, line);
			}
			else if (ft_strlen(line) == 0)
			{
				appendpiece(i, &list, piece);
				free(piece);
			}
			else
				return (ft_parse_error(i, file));
		}
		else
			return (ft_parse_error(i, file));
		free(line);
		i++;
	}
	return (1);
}
