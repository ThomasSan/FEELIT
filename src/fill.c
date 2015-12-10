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
	tab = (char **)malloc(sizeof(char *) * (size) + 1);
	while (i < size)
	{
		tab[i] = (char *)malloc(sizeof(char) * (size) + 1);
		i++;
	}
	ft_tabinit(tab, size);
	return (tab);
}

void		ft_tabinit(char **tab, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
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

char		**ft_copyarray(char **src, int size)
{
	int		i;
	char	**dst;

	i = 0;
	dst = (char **)malloc(sizeof(char *) * size + 1);
	while (i < size)
	{
		dst[i] = ft_strdup(src[i]);
		i++;
	}
	dst[i] = NULL;
	return (dst);
}