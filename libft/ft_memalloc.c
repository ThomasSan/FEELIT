/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:49:27 by mdebelle          #+#    #+#             */
/*   Updated: 2013/11/21 13:49:54 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*zone;

	zone = malloc(sizeof(zone) * (size));
	if (zone == NULL)
		return (NULL);
	zone = ft_memset(zone, '\0', size);
	return (zone);
}
