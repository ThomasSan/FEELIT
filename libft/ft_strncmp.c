/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:46:52 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 12:05:23 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] == s2[i] && s2[i])
		i++;
	if (i == n && i > 0)
		i--;
	j = s1[i] - s2[i];
	if (j > 0 || j < -127)
		return (1);
	else if (j < 0)
		return (-1);
	return (0);
}
