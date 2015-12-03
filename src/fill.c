/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <tsanzey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 13:17:52 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/02 16:40:43 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

char		**ft_alloc_tab(int	nbpieces)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * (nbpieces * 4) + 1);
	while (i < nbpieces)
	{
		*tab = (char *)malloc(sizeof(char) * (nbpieces * 4) + 1);
		i++;
	}
	return (tab);
}

char		**ft_tabinit(char **tab, int size)
{
	int	i;
	int j;

	i = 0;
	while (i < (size * 4))
	{
		j = 0;
		while (j < (size * 4) - 1)
		{
			tab[i][j] = '.';
			j++;	
		}
		tab[i][j] = '\n';
		j++;
		tab[i][j] = '\0';
		i++;
	}
	return (tab);
}