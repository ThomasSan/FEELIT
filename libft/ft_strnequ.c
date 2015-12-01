/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:06:41 by mdebelle          #+#    #+#             */
/*   Updated: 2013/11/22 11:06:43 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (!*s1 && !*s2)
		return (1);
	if (!*s1 || !*s2)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (0);
		i++;
	}
	if (i < n && (s1[i] != '\0' || s2[i] != '\0'))
		return (0);
	return (1);
}
