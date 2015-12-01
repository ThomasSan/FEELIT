/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:14:10 by mdebelle          #+#    #+#             */
/*   Updated: 2013/11/22 11:14:13 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*s;

	if (!(s = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	s = ft_memset(s, '\0', size + 1);
	return (s);
}
