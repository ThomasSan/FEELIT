/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rmtetris.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 15:52:57 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/13 15:54:20 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_rmtetris1(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 1) < size && (elem->pos[1] + 2) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 2] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1]] = '.';
			tab[elem->pos[0]][elem->pos[1] + 1] = '.';
			tab[elem->pos[0]][elem->pos[1] + 2] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = '.';
			elem->used = 0;
		}
}

void	ft_rmtetris2(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 1) < size && (elem->pos[1] + 2) < size)
		if ((tab[elem->pos[0]][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 2] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 1][elem->pos[1]] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 2] = '.';
			elem->used = 0;
		}
}

void	ft_rmtetris3(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 2) < size && (elem->pos[1] + 1) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 2][elem->pos[1]] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1]] = '.';
			tab[elem->pos[0] + 1][elem->pos[1]] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 2][elem->pos[1]] = '.';
			elem->used = 0;
		}
}

void	ft_rmtetris4(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 2) < size && (elem->pos[1] + 1) < size)
		if ((tab[elem->pos[0]][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 2][elem->pos[1] + 1] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 1][elem->pos[1]] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 2][elem->pos[1] + 1] = '.';
			elem->used = 0;
		}
}
