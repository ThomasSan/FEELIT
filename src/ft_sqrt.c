/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 11:51:44 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/13 15:50:57 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>

int		ft_sqrt(int n)
{
	int		i;

	i = 1;
	while (i * i < n)
		i++;
	return (i);
}

void	ft_array_fun(void)
{
	g_f[0] = NULL;
	g_f[1] = ft_putbarre1;
	g_f[2] = ft_putbarre2;
	g_f[3] = ft_putcoude1;
	g_f[4] = ft_putcoude2;
	g_f[5] = ft_putcoude3;
	g_f[6] = ft_putcoude4;
	g_f[7] = ft_putcoude5;
	g_f[8] = ft_putcoude6;
	g_f[9] = ft_putcoude7;
	g_f[10] = ft_putcoude8;
	g_f[11] = ft_putsquare;
	g_f[12] = ft_putzigzag1;
	g_f[13] = ft_putzigzag2;
	g_f[14] = ft_putzigzag3;
	g_f[15] = ft_putzigzag4;
	g_f[16] = ft_puttetris1;
	g_f[17] = ft_puttetris2;
	g_f[18] = ft_puttetris3;
	g_f[19] = ft_puttetris4;
}

void	ft_array_fun2(void)
{
	g_f2[0] = NULL;
	g_f2[1] = ft_rmbarre1;
	g_f2[2] = ft_rmbarre2;
	g_f2[3] = ft_rmcoude1;
	g_f2[4] = ft_rmcoude2;
	g_f2[5] = ft_rmcoude3;
	g_f2[6] = ft_rmcoude4;
	g_f2[7] = ft_rmcoude5;
	g_f2[8] = ft_rmcoude6;
	g_f2[9] = ft_rmcoude7;
	g_f2[10] = ft_rmcoude8;
	g_f2[11] = ft_rmsquare;
	g_f2[12] = ft_rmzigzag1;
	g_f2[13] = ft_rmzigzag2;
	g_f2[14] = ft_rmzigzag3;
	g_f2[15] = ft_rmzigzag4;
	g_f2[16] = ft_rmtetris1;
	g_f2[17] = ft_rmtetris2;
	g_f2[18] = ft_rmtetris3;
	g_f2[19] = ft_rmtetris4;
}
