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

void	fillit(char *file)
{
	t_lst	list;

	if (!checkfile(file, &list))
		return ;
	ft_putintab(&list);
	return ;
}

int		ft_usage(char *name)
{
	ft_putstr_fd("Usage: ", 2);
	ft_putstr_fd(name, 2);
	ft_putendl_fd(" [-c] [file]", 2);
	return (0);
}

int		color_option(char *name, char *option)
{
	if (ft_strcmp(option, "-c") == 0)
		return (1);
	return (ft_usage(name));
}

int		main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		return (ft_usage(argv[0]));
	if (argc == 2)
		fillit(argv[1]);
	else if (argc == 3 && color_option(argv[0], argv[1]))
		fillit(argv[2]);
	return (0);
}
