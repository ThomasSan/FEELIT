/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsefile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 19:04:25 by mdebelle          #+#    #+#             */
/*   Updated: 2015/12/08 16:31:44 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "fillit.h"
#include "libft.h"
#include "gnl.h"
#include <stdio.h>

int			goodline(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '#' && str[i] != '.')
			return (0);
		i++;
	}
	if (i == 4 || i == 0)
		return (1);
	return (0);
}


int			lol(int i, t_lst **list, char *piece, char *line)
{
	if (i % 5 != 0)
	{
		if (i % 5 == 1)
			piece = ft_strdup(line);
		else 
			piece = ft_strjoin(piece, line);
	}
	else if (ft_strlen(line) == 0)
	{
		printf("pice = %s\n", piece);
		appendpiece(i, list, piece);
	}
	else
		return (0);
	return (1);
}

int			checkfile(char *file, t_lst *list)
{
	int		fd;
	char	*line;
	int		i;
	char	*piece;

	piece = NULL;
	if ((fd = open(file, O_RDONLY)) == -1)
		return (0);
	i = 1;
	while (get_next_line(fd, &line) == 1)
	{
		if (goodline(line) == 1)
		{
			if (!lol(i, &list, piece, line))
				return (0);
		}
		else
			return (0);
		free(line);
		i++;
	}
	return (1);
}

