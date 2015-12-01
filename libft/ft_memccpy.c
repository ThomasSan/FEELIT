/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:15:59 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 11:44:56 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void			*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*tmp_s1;
	const char	*tmp_s2;

	tmp_s1 = (char *)s1;
	tmp_s2 = (const char *)s2;
	while (n--)
	{
		*tmp_s1 = *tmp_s2;
		if (*tmp_s2 == (char)c)
		{
			tmp_s1++;
			return (tmp_s1);
		}
		tmp_s1++;
		tmp_s2++;
	}
	return (0);
}
