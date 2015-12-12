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

void	ft_array_fun2(void)
{
	f2[0] = NULL;
	f2[1] = ft_rmbarre1;
	f2[2] = ft_rmbarre2;
	f2[3] = ft_rmcoude1;
	f2[4] = ft_rmcoude2;
	f2[5] = ft_rmcoude3;
	f2[6] = ft_rmcoude4;
	f2[7] = ft_rmcoude5;
	f2[8] = ft_rmcoude6;
	f2[9] = ft_rmcoude7;
	f2[10] = ft_rmcoude8;
	f2[11] = ft_rmsquare;
	f2[12] = ft_rmzigzag1;
	f2[13] = ft_rmzigzag2;
	f2[14] = ft_rmzigzag3;
	f2[15] = ft_rmzigzag4;
	f2[16] = ft_rmtetris1;
	f2[17] = ft_rmtetris2;
	f2[18] = ft_rmtetris3;
	f2[19] = ft_rmtetris4;
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
void	rm_tetris(char **tab, t_lst *l, int size)
{
	int	i;
	int	j;

	j = 0;
	while (j < size)
	{
		l->pos[0] = j;
		i = 0;
		while (i < size)
		{
			l->pos[1] = i;
			f2[l->type](l, tab, size);
			i++;
		}
		j++;
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
		while (i <size && l->used == 0)
		{
			l->pos[1] = i;
			f[l->type](l, tab, size - 1);
			if (l->used == 1)
			{
				printf("letter = %c, x = %d, y = %d\n", l->letter, l->pos[0], l->pos[1]);
				if (ft_is_good(tab, l->next, size, nb_pieces))
					return (1);
				else
				{
					f2[l->type](l, tab, size);
					printf("letter removed = %c\n", l->letter);
				}
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

printf("size %d\n", size);
	tab = ft_alloc_tab(size);
	ft_is_good(tab, l, size, nb_pieces);
	ft_displaytab(tab);
	// else
	// {
	// 	free(tab);
	// 	ft_resetlst(l, nb_pieces);
	// 	return(ft_putintab(l, size + 1, nb_pieces));
	// }
}
