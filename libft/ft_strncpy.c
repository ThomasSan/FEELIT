/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:27:17 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 11:50:34 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char				*ft_strncpy(char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s2[i] != '\0'))
	{
		s1[i] = s2[i];
		i++;
	}
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
	return (s1);
}
