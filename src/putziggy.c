/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putziggy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:18:43 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/04 14:18:45 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_putsquare(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 1) < size && (elem->pos[1] + 1) < size)
	{
		if ((tab[elem->pos[0]][elem->pos[1]] == '.')
				&& (tab[elem->pos[0]][elem->pos[1] + 1] == '.')
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == '.')
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.'))
		{
			tab[elem->pos[0]][elem->pos[1]] = elem->letter;
			tab[elem->pos[0]][elem->pos[1] + 1] = elem->letter;
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = elem->letter;
			tab[elem->pos[0] + 1][elem->pos[1]] = elem->letter;
			elem->used = 1;
		}
	}
}

void	ft_putzigzag1(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 1) < size && (elem->pos[1] + 2) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == '.')
				&& (tab[elem->pos[0]][elem->pos[1] + 1] == '.')
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == '.')
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 2] == '.'))
		{
			tab[elem->pos[0]][elem->pos[1]] = elem->letter;
			tab[elem->pos[0]][elem->pos[1] + 1] = elem->letter;
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = elem->letter;
			tab[elem->pos[0] + 1][elem->pos[1] + 2] = elem->letter;
			elem->used = 1;
		}
}

void	ft_putzigzag2(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 1) < size && (elem->pos[1] + 2) < size)
		if ((tab[elem->pos[0]][elem->pos[1] + 1] == '.')
				&& (tab[elem->pos[0]][elem->pos[1] + 2] == '.')
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.')
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == '.'))
		{
			tab[elem->pos[0]][elem->pos[1] + 1] = elem->letter;
			tab[elem->pos[0]][elem->pos[1] + 2] = elem->letter;
			tab[elem->pos[0] + 1][elem->pos[1]] = elem->letter;
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = elem->letter;
			elem->used = 1;
		}
}

void	ft_putzigzag3(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 2) < size && (elem->pos[1] + 1) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == '.')
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.')
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == '.')
				&& (tab[elem->pos[0] + 2][elem->pos[1] + 1] == '.'))
		{
			tab[elem->pos[0]][elem->pos[1]] = elem->letter;
			tab[elem->pos[0] + 1][elem->pos[1]] = elem->letter;
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = elem->letter;
			tab[elem->pos[0] + 2][elem->pos[1] + 1] = elem->letter;
			elem->used = 1;
		}
}

void	ft_putzigzag4(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 2) < size && (elem->pos[1] + 1) < size)
		if ((tab[elem->pos[0]][elem->pos[1] + 1] == '.')
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == '.')
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.')
				&& (tab[elem->pos[0] + 2][elem->pos[1]] == '.'))
		{
			tab[elem->pos[0]][elem->pos[1] + 1] = elem->letter;
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = elem->letter;
			tab[elem->pos[0] + 1][elem->pos[1]] = elem->letter;
			tab[elem->pos[0] + 2][elem->pos[1]] = elem->letter;
			elem->used = 1;
		}
}
