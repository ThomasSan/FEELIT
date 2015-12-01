/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:33:22 by mdebelle          #+#    #+#             */
/*   Updated: 2013/11/20 11:33:26 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char		*p1;
	char		*p2;
	size_t		i;

	if (!n)
		return (0);
	p1 = (char *)s1;
	p2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return ((unsigned char)p1[i] - (unsigned char)p2[i]);
		i++;
	}
	return (0);
}
