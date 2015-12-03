/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:11:21 by mdebelle          #+#    #+#             */
/*   Updated: 2015/12/03 14:59:50 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		find_piece_coudes(char *str)
{
	if ((ft_strcmp("###.#...........", str) == 0)
		|| (ft_strcmp("....###.#.......", str) == 0)
		|| (ft_strcmp("........###.#...", str) == 0)
		|| (ft_strcmp(".###.#..........", str) == 0)
		|| (ft_strcmp(".....###.#......", str) == 0)
		|| (ft_strcmp(".........###.#..", str) == 0))
		return (COUDE_1);
	else if ((ft_strcmp("###...#.........", str) == 0)
		|| (ft_strcmp("....###...#.....", str) == 0)
		|| (ft_strcmp("........###...#.", str) == 0)
		|| (ft_strcmp(".###...#........", str) == 0)
		|| (ft_strcmp(".....###...#....", str) == 0)
		|| (ft_strcmp(".........###...#", str) == 0))
		return (COUDE_2);
	else 
		if ((ft_strcmp("#...###.........", str) == 0) 
		|| (ft_strcmp("....#...###.....", str) == 0) 
		|| (ft_strcmp("........#...###.", str) == 0) 
		|| (ft_strcmp(".#...###........", str) == 0) 
		|| (ft_strcmp(".....#...###....", str) == 0) 
		|| (ft_strcmp(".........#...###", str) == 0))
		return (COUDE_3);
	return (find_piece_coudes_bis(str));
}

int		find_piece_coudes_bis(char *str)
{
	if ((ft_strcmp("..#.###.........", str) == 0) 
		|| (ft_strcmp("......#.###.....", str) == 0) 
		|| (ft_strcmp("..........#.###.", str) == 0) 
		|| (ft_strcmp("...#.###........", str) == 0) 
		|| (ft_strcmp(".......#.###....", str) == 0) 
		|| (ft_strcmp("...........#.###", str) == 0))
		return (COUDE_4);
	else if ((ft_strcmp("##..#...#.......", str) == 0) 
		|| (ft_strcmp(".##..#...#......", str) == 0) 
		|| (ft_strcmp("..##..#...#.....", str) == 0) 
		|| (ft_strcmp("....##..#...#...", str) == 0) 
		|| (ft_strcmp(".....##..#...#..", str) == 0) 
		|| (ft_strcmp("......##..#...#.", str) == 0))
		return (COUDE_5);
	else if ((ft_strcmp("##...#...#......", str) == 0) 
		|| (ft_strcmp(".##...#...#.....", str) == 0) 
		|| (ft_strcmp("..##...#...#....", str) == 0) 
		|| (ft_strcmp("....##...#...#..", str) == 0) 
		|| (ft_strcmp(".....##...#...#.", str) == 0) 
		|| (ft_strcmp("......##...#...#", str) == 0))
		return (COUDE_6);
	return (find_piece_coudes_ter(str));
}

int		find_piece_coudes_ter(char *str)
{
	if ((ft_strcmp(".#...#..##......", str) == 0) 
		|| (ft_strcmp("..#...#..##.....", str) == 0) 
		|| (ft_strcmp(".......#...#..##", str) == 0) 
		|| (ft_strcmp(".....#...#..##..", str) == 0) 
		|| (ft_strcmp("......#...#..##.", str) == 0) 
		|| (ft_strcmp(".......#...#..##", str) == 0))
		return (COUDE_7);
	else if ((ft_strcmp("#...#...##......", str) == 0) 
		|| (ft_strcmp(".#...#...##.....", str) == 0) 
		|| (ft_strcmp("..#...#...##....", str) == 0) 
		|| (ft_strcmp("....#...#...##..", str) == 0) 
		|| (ft_strcmp(".....#...#...##.", str) == 0) 
		|| (ft_strcmp("......#...#...##", str) == 0))
		return (COUDE_8);
	return (find_piece_square(str));
}

int		find_piece_square(char *str)
{
	if ((ft_strcmp("##..##..........", str) == 0) 
		|| (ft_strcmp("....##..##......", str) == 0) 
		|| (ft_strcmp("........##..##..", str) == 0) 
		|| (ft_strcmp(".##..##.........", str) == 0) 
		|| (ft_strcmp(".....##..##.....", str) == 0) 
		|| (ft_strcmp(".........##..##.", str) == 0)
		|| (ft_strcmp("..##..##........", str) == 0) 
		|| (ft_strcmp("......##..##....", str) == 0) 
		|| (ft_strcmp("..........##..##", str) == 0))
		return (SQUARE);
	else
		return (0);
}