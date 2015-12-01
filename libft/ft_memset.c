/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:06:19 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 11:43:02 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void			*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*dest;

	i = 0;
	dest = b;
	while (i < len)
	{
		dest[i] = (char)c;
		i++;
	}
	return (b);
}
