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
	while (l)
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

int			appendpiece(int i, t_lst **list, char *piece)
{
	int		type;

	if ((type = find_piece_type(piece)) == 0)
		exit(ft_error());
	if (i / 5 == 1)
	{
		ft_putendl_fd("tgtgtgtg\n", 2);
		ft_firstnode(list, i, type);
	}
	else
	{
		ft_putendl_fd("tda\n", 2);
		ft_newnode(list, i, type);
	}
	return (1);
}

