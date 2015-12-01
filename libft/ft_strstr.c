/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 11:31:37 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 12:02:30 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[i])
		return ((char *)&s1[0]);
	while (s1[i])
	{
		j = 0;
		if (s1[i + j] == s2[j])
		{
			while (s1[i + j] == s2[j] && s2[j])
				j++;
			if (!s2[j])
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (0);
}
