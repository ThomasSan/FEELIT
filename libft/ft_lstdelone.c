/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 15:43:35 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/24 15:44:10 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**tmp;

	del((*alst)->content, (*alst)->content_size);
	tmp = &((*alst)->next);
	free(*alst);
	*alst = *tmp;
	return ;
}
