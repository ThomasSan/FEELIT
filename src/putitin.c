/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putitin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:43:08 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/13 15:56:22 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		checktab(t_lst *l, int size)
{
	while (size > 0)
	{
		if (l->used == 0)
			return (0);
		l = l->next;
		size--;
	}
	return (1);
}

void	ft_resetlst(t_lst *l, int size)
{
	while (size > 0)
	{
		l->used = 0;
		l = l->next;
		size--;
	}
}

int		ft_is_good(char **tab, t_lst *l, int size, int nb_pieces)
{
	int		i;
	int		j;

	if (checktab(l, size))
		return (1);
	j = 0;
	while (j < size && l->used == 0)
	{
		l->pos[0] = j;
		i = 0;
		while (i < size && l->used == 0)
		{
			l->pos[1] = i;
			g_f[l->type](l, tab, size);
			if (l->used == 1)
			{
				if (ft_is_good(tab, l->next, size, nb_pieces))
					return (1);
				g_f2[l->type](l, tab, size);
			}
			i++;
		}
		j++;
	}
	return (0);
}

void	ft_putintab(t_lst *l, int size, int nb_pieces)
{
	char	**tab;

	tab = ft_alloc_tab(size);
	if (ft_is_good(tab, l, size, nb_pieces))
	{
		ft_displaytab(tab, size);
		free(tab);
	}
	else
	{
		if (tab)
			free(tab);
		ft_resetlst(l, nb_pieces);
		return (ft_putintab(l, size + 1, nb_pieces));
	}
}
