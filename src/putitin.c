/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putitin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:43:08 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/09 14:23:06 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

#include <stdio.h>

void	ft_array_fun(void)
{
	f[0] = NULL;
	f[1] = ft_putbarre1;
	f[2] = ft_putbarre2;
	f[3] = ft_putcoude1;
	f[4] = ft_putcoude2;
	f[5] = ft_putcoude3; 
	f[6] = ft_putcoude4; 
	f[7] = ft_putcoude5; 
	f[8] = ft_putcoude6; 
	f[9] = ft_putcoude7; 
	f[10] = ft_putcoude8; 
	f[11] = ft_putsquare; 
	f[12] = ft_putzigzag1;
	f[13] = ft_putzigzag2;
	f[14] = ft_putzigzag3;
	f[15] = ft_putzigzag4;
	f[16] = ft_puttetris1;
	f[17] = ft_puttetris2;
	f[18] = ft_puttetris3;
	f[19] = ft_puttetris4;
}

int		checktab(t_lst *l)
{
	while (l)
	{
		if (l->used == 0)
			return (0);
		l = l->next;
	}
	return (1);
}

void	ft_resetlst(t_lst *l)
{
	while (l)
	{
		l->used = 0;
		l = l->next;
	}
}

void	ft_putintab(t_lst *l, int size)
{
	char	**tab;
	t_lst	*tmp;
	int		i;
	int		j;

	tmp = l;
	tab = ft_alloc_tab(size);
	while (tmp)
	{
		j = 0;
		while (j < size && tmp->used == 0)
		{
			tmp->pos[0] = j;
			i = 0;		
			while (i < size && tmp->used == 0)
			{
				f[tmp->type](tmp, tab, size);
				tmp->pos[1] = i;
				i++;
			}
			j++;
		}
		tmp = tmp->next;
	}
	if (checktab(l) == 0)
	{
		free(tab);
		ft_resetlst(l);
		// pas opti, il faut essayer de start avec tout les elements avant de up la tab size
		// il y a une function pour passer la liste chainee en circulaire
		return (ft_putintab(l, size + 1));
	}
	ft_displaytab(tab);
}
