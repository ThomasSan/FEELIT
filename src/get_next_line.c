/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 18:16:45 by mdebelle          #+#    #+#             */
/*   Updated: 2015/11/23 19:38:21 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					ft_error(int fd, char **line)
{
	if (fd < 0)
		return (-1);
	if (line == NULL)
		return (-1);
	else
		return (0);
}

char				*checkline(char *line)
{
	int				i;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	line[i] = '\0';
	return (line);
}

char				*checkbuf(char *buf)
{
	while (*buf && *buf != '\n')
		buf++;
	if (*buf && *buf == '\n')
		buf++;
	if (buf)
		return (ft_strdup(buf));
	else
		return (NULL);
}

int					get_next_line(int fd, char **line)
{
	static char		buf[31];
	int				ret;

	if (ft_error(fd, line) == -1)
		return (-1);
	*line = checkbuf(buf);
	while ((ret = read(fd, buf, 2)) != -1)
	{
		buf[ret] = '\0';
		if (*line == NULL)
			*line = ft_strdup(buf);
		else
			*line = ft_strjoin(*line, buf);
		if (ft_countachr(buf, '\n') > 0)
		{
			*line = checkline(*line);
			return (1);
		}
		if (ret == 0)
			return (-1);
	}
	if (ret == -1)
		return (-1);
	buf[ret] = '\0';
	return (0);
}
