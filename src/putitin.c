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

int		ft_is_good(char **tab, t_lst *l, int start, int nb_pieces)
{
	int		size;
	int		i;
	int		j;
	char	**oldtab;

	size = ft_sqrt(nb_pieces * 4);
	oldtab = ft_copyarray(tab, size);
	if (checktab(l, size))
		return (1);
	j = 0;
	while (j < size)
	{
		i = 0;
		while (i <size)
		{
			l->pos[1] = i;
			f[l->type](l, tab, size);
			i++;
		}
		j++;
	}

}
/*void	ft_is_good(char **tab, t_lst *l, int nb_pieces)
{
	int		size;
	int		i;
	int		j;

	size = ft_sqrt(nb_pieces * 4);
	printf("first letter = %c\n", l->letter);
	while (0 < nb_pieces)
	{
		j = 0;
		while (j < size && l->used == 0)
		{
			l->pos[0] = j;
			i = 0;
			while (i < size && l->used == 0)
			{
				l->pos[1] = i;
				f[l->type](l, tab, size);
				i++;
			}
			j++;
		}
		printf("letter = %c & used = %d\n", l->letter, l->used);
		l = l->next;
		nb_pieces--;
	}
}*/

void	ft_putintab(t_lst *l, int size, int nb_pieces)
{
	char	**tab;
	int		start;

	start = 0;
	tab = ft_alloc_tab(size);
	ft_is_good(tab, l, start, nb_pieces);
	if (checktab(l, nb_pieces) == 0)
	{	
		free(tab);
		ft_resetlst(l, nb_pieces);	
		return (ft_putintab(l = l->next, size, nb_pieces));
	}
	ft_displaytab(tab);
}
