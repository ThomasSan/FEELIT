/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:24:05 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 11:46:20 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	size_t			i;

	i = 0;
	tmp_s = (unsigned char *)s;
	while (i < n)
	{
		if (*tmp_s == (unsigned char)c)
			return ((void *)tmp_s);
		tmp_s++;
		i++;
	}
	return (NULL);
}
