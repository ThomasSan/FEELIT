/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 18:15:25 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/31 12:22:54 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

int					ft_error(int fd, char **line);
char				*checkline(char *line);
char				*checkbuf(char *buf);
int					get_next_line(int fd, char **line);

#endif
