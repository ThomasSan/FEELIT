/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsefile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 19:04:25 by mdebelle          #+#    #+#             */
/*   Updated: 2015/12/02 10:53:00 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "fillit.h"
#include "gnl.h"
#include <stdio.h>

int			ft_parse_error(int i, char *file)
{
	ft_putstr_fd("Parse error around line ", 2);
	ft_putstr_fd(ft_itoa(i), 2);
	ft_putstr_fd(" in ", 2);
	ft_putendl_fd(file, 2);
	return (0);
}

void		appendpiece(int i, t_lst *list, char *piece)
{
	int type;
	(void)i;
	(void)list;
	ft_putendl_fd(piece, 2);
	if ((type = find_piece_type(piece)) == 0)
		ft_parse_error(i, "lol");
	return ;
}

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

int			checkfile(char *file, t_lst *list)
{
	int		fd;
	char	*line;
	int		i;
	char	*piece;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (0);
	i = 1;
	while(get_next_line(fd, &line) == 1)
	{
		if (goodline(line) == 1)
		{
			if (i % 5 != 0)
			{
				if (i%5 == 1)
					piece = ft_strdup(line);
				else 
					piece = ft_strjoin(piece, line);
			}
			else if (ft_strlen(line) == 0)
			{
				appendpiece(i, list, piece);
				free(piece);
			}
			else
				return (ft_parse_error(i, file));
		}
		else
			return (ft_parse_error(i, file));
		free(line);
		i++;
	}
	return (1);
}
