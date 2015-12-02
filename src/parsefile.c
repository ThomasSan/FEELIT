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
#include "get_next_line.h"
#include <stdio.h>

int			ft_parse_error(int i, char *file, char *more, int j)
{
	ft_putstr_fd("Parse error around line ", 2);
	ft_putstr_fd(ft_itoa(i), 2);
	ft_putstr_fd(" in ", 2);
	ft_putendl_fd(file, 2);
	if (more != NULL)
		ft_putendl_fd(more, 2);
	else 
		ft_putendl_fd(ft_itoa(j), 2);
	return (0);
}

void		appendpiece(int i, t_lst *list, char **piece)
{
	(void)i;
	(void)list;
	(void)piece;
//	type = find_piece_type(line);
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
	char	**piece;
	int j;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (0);
	piece = (char **)malloc(sizeof(char *) * 5);
	i = 1;
	while(get_next_line(fd, &line) == 1)
	{
	//	printf("line : %s\n", line);
	//	ft_putendl_fd(ft_itoa(i), 2);
		if (goodline(line) == 1)
		{
	//		ft_putendl_fd(line, 2);
			if (i % 5 != 0)
				piece[(i % 5) - 1] = ft_strdup(line);
			else if ((j = ft_strlen(line)) == 0)
			{
				ft_putendl_fd("piece", 2);
				appendpiece(i, list, piece);
			}
			else
				return (ft_parse_error(i, file, line, j));
		}
		else
			return (ft_parse_error(i, file, "badline", 0));
		free(line);
		i++;
	}
	return (1);
}
