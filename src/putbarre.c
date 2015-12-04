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

void	ft_putbarreh(t_lst *elem)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 2] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 3] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = '#';
		tab[elem->pos[0]][elem->pos[1] + 1] = '#';
		tab[elem->pos[0]][elem->pos[1] + 2] = '#';
		tab[elem->pos[0]][elem->pos[1] + 3] = '#';
	}
}

void	ft_putbarrev(t_lst *elem)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 2][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 3][elem->pos[1]] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = '#';
		tab[elem->pos[0] + 1][elem->pos[1]] = '#';
		tab[elem->pos[0] + 2][elem->pos[1]] = '#';
		tab[elem->pos[0] + 3][elem->pos[1]] = '#';
	}
}

void	ft_putcoude1(t_lst *elem)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 2] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = '#';
		tab[elem->pos[0]][elem->pos[1] + 1] = '#';
		tab[elem->pos[0]][elem->pos[1] + 2] = '#';
		tab[elem->pos[0] + 1][elem->pos[1]] = '#';
	}
}

void	ft_putcoude2(t_lst *elem)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0]][elem->pos[1] + 2] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1] + 2] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = '#';
		tab[elem->pos[0]][elem->pos[1] + 1] = '#';
		tab[elem->pos[0]][elem->pos[1] + 2] = '#';
		tab[elem->pos[0] + 1][elem->pos[1] + 2] = '#';
	}
}

void	ft_putcoude3(t_lst *elem)
{
	if ((tab[elem->pos[0]][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1]] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == '.')
			&& (tab[elem->pos[0] + 1][elem->pos[1] + 2] == '.'))
	{
		tab[elem->pos[0]][elem->pos[1]] = '#';
		tab[elem->pos[0] + 1][elem->pos[1]] = '#';
		tab[elem->pos[0] + 1][elem->pos[1] + 1] = '#';
		tab[elem->pos[0] + 1][elem->pos[1] + 2] = '#';
	}
}
