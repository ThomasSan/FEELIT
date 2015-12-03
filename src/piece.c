/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:11:21 by mdebelle          #+#    #+#             */
/*   Updated: 2015/12/03 11:11:23 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_piece_type(char *str)
{
	if ((ft_strcmp ("...#...#...#...#", str) == 0) || (ft_strcmp("..#...#...#...#.", str) == 0) || (ft_strcmp(".#...#...#...#..", str) == 0) || (ft_strcmp("#...#...#...#...", str) == 0))
		ft_putendl_fd("type: BARE_1", 2);
	else if ((ft_strcmp("####............", str) == 0) || (ft_strcmp("....####........", str) == 0) || (ft_strcmp("........####....", str) == 0) || (ft_strcmp("............####", str) == 0))
		ft_putendl_fd("type: BARE_2", 2);
	else if ((ft_strcmp("###.#...........", str) == 0) || (ft_strcmp("....###.#.......", str) == 0) || (ft_strcmp("........###.#...", str) == 0) || (ft_strcmp(".###.#..........", str) == 0) || (ft_strcmp(".....###.#......", str) == 0) || (ft_strcmp(".........###.#..", str) == 0))
		ft_putendl_fd("type: COUDE_1", 2);
	else if ((ft_strcmp("###...#.........", str) == 0) || (ft_strcmp("....###...#.....", str) == 0) || (ft_strcmp("........###...#.", str) == 0) || (ft_strcmp(".###...#........", str) == 0) || (ft_strcmp(".....###...#....", str) == 0) || (ft_strcmp(".........###...#", str) == 0))
		ft_putendl_fd("type: COUDE_2", 2);
	else if ((ft_strcmp("#...###.........", str) == 0) || (ft_strcmp("....#...###.....", str) == 0) || (ft_strcmp("........#...###.", str) == 0) || (ft_strcmp(".#...###........", str) == 0) || (ft_strcmp(".....#...###....", str) == 0) || (ft_strcmp(".........#...###", str) == 0))
		ft_putendl_fd("type: COUDE_3", 2);
	else if ((ft_strcmp("..#.###.........", str) == 0) || (ft_strcmp("......#.###.....", str) == 0) || (ft_strcmp("..........#.###.", str) == 0) || (ft_strcmp("...#.###........", str) == 0) || (ft_strcmp(".......#.###....", str) == 0) || (ft_strcmp("...........#.###", str) == 0))
		ft_putendl_fd("type: COUDE_4", 2);
	else if ((ft_strcmp("##..#...#.......", str) == 0) || (ft_strcmp(".##..#...#......", str) == 0) || (ft_strcmp("..##..#...#.....", str) == 0) || (ft_strcmp("....##..#...#...", str) == 0) || (ft_strcmp(".....##..#...#..", str) == 0) || (ft_strcmp("......##..#...#.", str) == 0))
		ft_putendl_fd("type: COUDE_5", 2);
	else if ((ft_strcmp("##...#...#......", str) == 0) || (ft_strcmp(".##...#...#.....", str) == 0) || (ft_strcmp("..##...#...#....", str) == 0) || (ft_strcmp("....##...#...#..", str) == 0) || (ft_strcmp(".....##...#...#.", str) == 0) || (ft_strcmp("......##...#...#", str) == 0))
		ft_putendl_fd("type: COUDE_6", 2);
	else if ((ft_strcmp(".#...#..##......", str) == 0) || (ft_strcmp("..#...#..##.....", str) == 0) || (ft_strcmp(".......#...#..##", str) == 0) || (ft_strcmp(".....#...#..##..", str) == 0) || (ft_strcmp("......#...#..##.", str) == 0) || (ft_strcmp(".......#...#..##", str) == 0))
		ft_putendl_fd("type: COUDE_7", 2);
	else if ((ft_strcmp("#...#...##......", str) == 0) || (ft_strcmp(".#...#...##.....", str) == 0) || (ft_strcmp("..#...#...##....", str) == 0) || (ft_strcmp("....#...#...##..", str) == 0) || (ft_strcmp(".....#...#...##.", str) == 0) || (ft_strcmp("......#...#...##", str) == 0))
		ft_putendl_fd("type: COUDE_8", 2);
	else if ((ft_strcmp("##...##.........", str) == 0) || (ft_strcmp(".##...##........", str) == 0) || (ft_strcmp("....##...##.....", str) == 0) || (ft_strcmp(".....##...##....", str) == 0) || (ft_strcmp("........##...##.", str) == 0) || (ft_strcmp(".........##...##", str) == 0))
		ft_putendl_fd("type: ZIGZAG_1", 2);
	else if ((ft_strcmp(".##.##..........", str) == 0) || (ft_strcmp("..##.##.........", str) == 0) || (ft_strcmp(".....##.##......", str) == 0) || (ft_strcmp("......##.##.....", str) == 0) || (ft_strcmp(".........##.##..", str) == 0) || (ft_strcmp("..........##.##.", str) == 0))
		ft_putendl_fd("type: ZIGZAG_2", 2);
	else if ((ft_strcmp("#...##...#......", str) == 0) || (ft_strcmp(".#...##...#.....", str) == 0) || (ft_strcmp("..#...##...#....", str) == 0) || (ft_strcmp("....#...##...#..", str) == 0) || (ft_strcmp(".....#...##...#.", str) == 0) || (ft_strcmp("......#...##...#", str) == 0))
		ft_putendl_fd("type: ZIGZAG_3", 2);
	else if ((ft_strcmp(".#..##..#.......", str) == 0) || (ft_strcmp("..#..##..#......", str) == 0) || (ft_strcmp("...#..##..#.....", str) == 0) || (ft_strcmp(".....#..##..#...", str) == 0) || (ft_strcmp("......#..##..#..", str) == 0) || (ft_strcmp(".......#..##..#.", str) == 0))
		ft_putendl_fd("type: ZIGZAG_4", 2);
	else if ((ft_strcmp("###..#..........", str) == 0) || (ft_strcmp("....###..#......", str) == 0) || (ft_strcmp("........###..#..", str) == 0) || (ft_strcmp(".###..#.........", str) == 0) || (ft_strcmp(".....###..#.....", str) == 0) || (ft_strcmp(".........###..#.", str) == 0))
		ft_putendl_fd("type: TETRIS_1", 2);
	else if ((ft_strcmp(".#..###.........", str) == 0) || (ft_strcmp(".....#..###.....", str) == 0) || (ft_strcmp(".........#..###.", str) == 0) || (ft_strcmp("..#..###........", str) == 0) || (ft_strcmp("......#..###....", str) == 0) || (ft_strcmp("..........#..###", str) == 0))
		ft_putendl_fd("type: TETRIS_2", 2);
	else if ((ft_strcmp("#...##..#.......", str) == 0) || (ft_strcmp("....#...##..#...", str) == 0) || (ft_strcmp(".#...##..#......", str) == 0) || (ft_strcmp(".....#...##..#..", str) == 0) || (ft_strcmp("..#...##..#.....", str) == 0) || (ft_strcmp("......#...##..#.", str) == 0))
		ft_putendl_fd("type: TETRIS_3", 2);
	else if ((ft_strcmp(".#..##...#......", str) == 0) || (ft_strcmp(".....#..##...#..", str) == 0) || (ft_strcmp("..#..##...#.....", str) == 0) || (ft_strcmp("......#..##...#.", str) == 0) || (ft_strcmp("...#..##...#....", str) == 0) || (ft_strcmp(".......#..##...#", str) == 0))
		ft_putendl_fd("type: TETRIS_4", 2);	
	else if ((ft_strcmp("##..##..........", str) == 0) || (ft_strcmp("....##..##......", str) == 0) || (ft_strcmp("........##..##..", str) == 0) || (ft_strcmp(".##..##.........", str) == 0) || (ft_strcmp(".....##..##.....", str) == 0) || (ft_strcmp(".........##..##.", str) == 0) || (ft_strcmp("..##..##........", str) == 0) || (ft_strcmp("......##..##....", str) == 0) || (ft_strcmp("..........##..##", str) == 0))
		ft_putendl_fd("type: SQUARE", 2);
	else
		return (0);
	return (1);
}
