/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putitin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:43:08 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/04 12:03:21 by tsanzey          ###   ########.fr       */
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

void	ft_putintab(t_lst *l)
{
	char	**tab;

	tab = ft_alloc_tab();
	while (l)
	{
		while (l->used != 1)
		{
			f[l->type](l, tab);
			l->pos[1] += 1;
		}
		l = l->next;
	}
	ft_displaytab(tab);
}