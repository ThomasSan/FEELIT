/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manip_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 17:37:47 by mdebelle          #+#    #+#             */
/*   Updated: 2015/12/08 17:37:49 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include <stdio.h>

void			ft_newnode(t_lst **l, int i, int type)
{
	t_lst	*new;
	t_lst	*tmp;

	tmp = *l;
	if(!(new = (t_lst*)malloc(sizeof(t_lst))))
		return ;
	new->letter = (65 + (i / 5));
	new->used = 0;
	new->type = type;
	new->pos[0] = 0;
	new->pos[1] = 0;
	new->next = NULL;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

int			ft_lstlen(t_lst *l)
{
	int	i;

	i = 0;
	while (l)
	{
		i++;
		l = l->next;
	}
	return (i);
}

void		ft_firstnode(t_lst **l, int type)
{
	(*l)->letter = (65);
	(*l)->used = 0;
	(*l)->type = type;
	(*l)->pos[0] = 0;
	(*l)->pos[1] = 0;
	(*l)->next = NULL;
}

int			appendpiece(int i, t_lst **list, char *piece)
{
	int		type;

	if ((type = find_piece_type(piece)) == 0)
	{
		free(piece);
		exit(ft_error());
	}
	if (i == 4)
		ft_firstnode(list, type);
	else
		ft_newnode(list, i, type);

	free(piece);
	return (1);
}