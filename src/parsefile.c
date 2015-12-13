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

char		*cat_piece(int i, char *piece, char *line)
{
	if (i % 5 != 0)
	{
		if (i % 5 == 1)
			piece = ft_strdup(line);
		else
			piece = ft_strjoin(piece, line);
	}
	else
		return (NULL);
	return (piece);
}

int			checkfile(char *file, t_lst *list)
{
	int		fd;
	char	*line;
	int		i;
	char	*piece;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (0);
	i = 1;
	while (get_next_line(fd, &line) == 1)
	{
		if (goodline(line) == 1)
		{
			piece = cat_piece(i, piece, line);
			if (i % 5 == 4)
				appendpiece(i, &list, piece);
		}
		else
			return (0);
		free(line);
		i++;
	}
	if (i % 5 != 0)
		return (0);
	return (1);
}
