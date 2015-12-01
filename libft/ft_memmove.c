/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:22:17 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 11:45:32 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*dest;
	char	*src;

	if (s1 > s2)
	{
		dest = (char *)s1 + n - 1;
		src = (char *)s2 + n - 1;
		while (n != 0)
		{
			*dest-- = *src--;
			n--;
		}
		return (s1);
	}
	return (ft_memcpy(s1, s2, n));
}
