/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <tsanzey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 13:17:52 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/04 18:26:00 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include <stdlib.h>

char		**ft_alloc_tab(int size)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * (size));
	while (i < size)
	{
		tab[i] = (char *)malloc(sizeof(char) * (size));
		i++;
	}
	ft_tabinit(tab);
	return (tab);
}

void		ft_tabinit(char **tab)
{
	int		i;
	int		j;

	i = 0;		
	while (i < 28)
	{
		j = 0;
		while (j < 28)
		{
			tab[i][j] = '.';
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
}

void		ft_displaytab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_putendl(tab[i]);
		i++;
	}
}

