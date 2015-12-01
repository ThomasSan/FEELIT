/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:56:31 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 11:53:05 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dst_len;

	d = dst;
	s = src;
	dst_len = d - dst;
	n = size - dst_len;
	while (n-- && *d)
		d++;
	dst_len = d - dst;
	n = size - dst_len;
	if (n == 0)
		return (dst_len + ft_strlen(src));
	while (n > 1 && *s)
	{
		n--;
		*d++ = *s++;
	}
	*d = '\0';
	return (dst_len + ft_strlen(src));
}
