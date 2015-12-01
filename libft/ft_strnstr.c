/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:24:38 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 12:03:37 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[0])
		return ((char *)s1);
	while (i < n && s1[i])
	{
		j = 0;
		if (s1[i + j] == s2[j])
		{
			while (s1[i + j] == s2[j] && s2[j] && (i + j) < n)
				j++;
			if (!s2[j])
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (0);
}
