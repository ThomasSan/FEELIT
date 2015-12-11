/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <tsanzey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:16:10 by tsanzey           #+#    #+#             */
/*   Updated: 2015/12/04 18:23:42 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		ft_error(void)
{
	ft_putendl_fd("error", 2);
	return (0);
}

void	fillit(char *file)
{
	t_lst	list;
	int		size;
	int		nb_pieces;

	if (!checkfile(file, &list))
	{
		ft_error();
		return ;
	}
	nb_pieces = ft_lstlen(&list);
	if (nb_pieces > 26)
	{
		ft_error();
		return ;
	}
	size = ft_sqrt(nb_pieces * 4);
	ft_lstcircl(&list);
	ft_putintab(&list, size, nb_pieces);
	return ;
}

int		main(int argc, char **argv)
{
	ft_array_fun();
	ft_array_fun2();
	if (argc != 2)
		return (ft_error());
	fillit(argv[1]);
	return (0);
}
