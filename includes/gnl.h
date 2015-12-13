/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 18:27:26 by mdebelle          #+#    #+#             */
/*   Updated: 2015/12/04 18:28:38 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# define BUF_SIZE 1

int		get_next_line(int const fd, char **line);
char	*ft_delete_read_line(char *s, int i);
int		ft_buffer_filling(int const fd, char **str);
int		ft_checking_new_line(char *s);
int		get_next_line(int const fd, char **line);

#endif
