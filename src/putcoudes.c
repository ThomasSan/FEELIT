/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putcoudes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:18:30 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/04 14:18:32 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putcoude4(t_lst *elem)
{
	if ((tab[elem->pos[0] + 1][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1] + 2] == '.')
			&& (tab[elem->pos[0]][elem->pos[1]] == '.'))
	{
		tab[elem->pos[0] + 1][elem->pos[1]] = '#';
		tab[elem->pos[0] + 1][elem->pos[1] + 1] = '#';
		tab[elem->pos[0] + 1][elem->pos[1] + 2] = '#';
		tab[elem->pos[0]][elem->pos[1] + 2] = '#';
	}
}

void	ft_putcoude5(t_lst *elem)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 2][elem->pos[1]] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = '#';
		tab[elem->pos[0]][elem->pos[1] + 1] = '#';
		tab[elem->pos[0] + 1][elem->pos[1]] = '#';
		tab[elem->pos[0] + 2][elem->pos[1]] = '#';
	}
}

void	ft_putcoude6(t_lst *elem)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0] + 2][elem->pos[1] + 1] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = '#';
		tab[elem->pos[0]][elem->pos[1] + 1] = '#';
		tab[elem->pos[0] + 1][elem->pos[1] + 1] = '#';
		tab[elem->pos[0] + 2][elem->pos[1] + 1] = '#';
	}
}

void	ft_putcoude7(t_lst *elem)
{
	if ((tab[elem->pos[0]][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0] + 2][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0] + 2][elem->pos[1]] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1] + 1] = '#';
		tab[elem->pos[0] + 1][elem->pos[1] + 1] = '#';
		tab[elem->pos[0] + 2][elem->pos[1] + 1] = '#';
		tab[elem->pos[0] + 2][elem->pos[1]] = '#';
	}
}

void	ft_putcoude8(t_lst *elem)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 2][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 2][elem->pos[1] + 1] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = '#';
		tab[elem->pos[0] + 1][elem->pos[1]] = '#';
		tab[elem->pos[0] + 2][elem->pos[1]] = '#';
		tab[elem->pos[0] + 2][elem->pos[1] + 1] = '#';
	}
}
