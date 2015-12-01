/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:06:52 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 11:46:53 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t		ft_strlen(const char *s)
{
	int		i;

	i = 1;
	if (s[0] == '\0')
		return (0);
	else
	{
		while (s[i] != '\0')
			i++;
	}
	return (i);
}