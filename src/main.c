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

int			ft_error(void)
{
	ft_putendl_fd("Error.", 2);
	return (0);
}

void	fillit(char *file)
{
	t_lst	list;
	int		size;

	if (!checkfile(file, &list))
	{
		ft_error();
		return ;
	}
	size = 4;
	ft_putintab(&list, size);
	return ;
}

int		main(int argc, char **argv)
{
	ft_array_fun();
	if (argc != 2)
		return (ft_error());
	fillit(argv[1]);
	return (0);
}
