/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putitin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:43:08 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/04 18:17:44 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_putintab(t_lst *l)
{
	char	**tab;

	(void)l;
	tab = ft_alloc_tab();
	ft_displaytab(tab);
}

