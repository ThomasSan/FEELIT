/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putbarre.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:18:19 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/04 14:18:21 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void	ft_putbarre1(t_lst *elem, char **tab)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 2] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 3] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = elem->letter;
		tab[elem->pos[0]][elem->pos[1] + 1] = elem->letter;
		tab[elem->pos[0]][elem->pos[1] + 2] = elem->letter;
		tab[elem->pos[0]][elem->pos[1] + 3] = elem->letter;
		elem->used = 1;
	}
}

void	ft_putbarre2(t_lst *elem, char **tab)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 2][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 3][elem->pos[1]] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = elem->letter;
		tab[elem->pos[0] + 1][elem->pos[1]] = elem->letter;
		tab[elem->pos[0] + 2][elem->pos[1]] = elem->letter;
		tab[elem->pos[0] + 3][elem->pos[1]] = elem->letter;
		elem->used = 1;
	}
}

void	ft_putcoude1(t_lst *elem, char **tab)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 2] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = elem->letter;
		tab[elem->pos[0]][elem->pos[1] + 1] = elem->letter;
		tab[elem->pos[0]][elem->pos[1] + 2] = elem->letter;
		tab[elem->pos[0] + 1][elem->pos[1]] = elem->letter;
		elem->used = 1;
	}
}

void	ft_putcoude2(t_lst *elem, char **tab)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 2] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1] + 2] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = elem->letter;
		tab[elem->pos[0]][elem->pos[1] + 1] = elem->letter;
		tab[elem->pos[0]][elem->pos[1] + 2] = elem->letter;
		tab[elem->pos[0] + 1][elem->pos[1] + 2] = elem->letter;
		elem->used = 1;
	}
}

void	ft_putcoude3(t_lst *elem, char **tab)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1] + 2] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = elem->letter;
		tab[elem->pos[0] + 1][elem->pos[1]] = elem->letter;
		tab[elem->pos[0] + 1][elem->pos[1] + 1] = elem->letter;
		tab[elem->pos[0] + 1][elem->pos[1] + 2] = elem->letter;
		elem->used = 1;
	}
}
