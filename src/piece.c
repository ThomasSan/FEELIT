/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:11:21 by mdebelle          #+#    #+#             */
/*   Updated: 2015/12/03 15:19:59 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		find_piece_type(char *str)
{
	if ((ft_strcmp ("...#...#...#...#", str) == 0)
		|| (ft_strcmp("..#...#...#...#.", str) == 0)
		|| (ft_strcmp(".#...#...#...#..", str) == 0)
		|| (ft_strcmp("#...#...#...#...", str) == 0))
		return (BARRE_1);
	else if ((ft_strcmp("####............", str) == 0)
		|| (ft_strcmp("....####........", str) == 0)
		|| (ft_strcmp("........####....", str) == 0)
		|| (ft_strcmp("............####", str) == 0))
		return (BARRE_2);
	
	return (find_piece_type_bis(str));
}

int		find_piece_type_bis(char *str)
{
	if ((ft_strcmp("##...##.........", str) == 0) 
		|| (ft_strcmp(".##...##........", str) == 0) 
		|| (ft_strcmp("....##...##.....", str) == 0) 
		|| (ft_strcmp(".....##...##....", str) == 0) 
		|| (ft_strcmp("........##...##.", str) == 0) 
		|| (ft_strcmp(".........##...##", str) == 0))
		return (ZIGZAG_1);
	else if ((ft_strcmp(".##.##..........", str) == 0) 
		|| (ft_strcmp("..##.##.........", str) == 0) 
		|| (ft_strcmp(".....##.##......", str) == 0) 
		|| (ft_strcmp("......##.##.....", str) == 0) 
		|| (ft_strcmp(".........##.##..", str) == 0) 
		|| (ft_strcmp("..........##.##.", str) == 0))
		return (ZIGZAG_2);
	else if ((ft_strcmp("#...##...#......", str) == 0) 
		|| (ft_strcmp(".#...##...#.....", str) == 0) 
		|| (ft_strcmp("..#...##...#....", str) == 0) 
		|| (ft_strcmp("....#...##...#..", str) == 0) 
		|| (ft_strcmp(".....#...##...#.", str) == 0) 
		|| (ft_strcmp("......#...##...#", str) == 0))
		return (ZIGZAG_3);
	return (find_piece_type_ter(str));
}

int		find_piece_type_ter(char *str)
{
	if ((ft_strcmp(".#..##..#.......", str) == 0) 
		|| (ft_strcmp("..#..##..#......", str) == 0) 
		|| (ft_strcmp("...#..##..#.....", str) == 0) 
		|| (ft_strcmp(".....#..##..#...", str) == 0) 
		|| (ft_strcmp("......#..##..#..", str) == 0) 
		|| (ft_strcmp(".......#..##..#.", str) == 0))
		return (ZIGZAG_4);
	else if ((ft_strcmp("###..#..........", str) == 0) 
		|| (ft_strcmp("....###..#......", str) == 0) 
		|| (ft_strcmp("........###..#..", str) == 0) 
		|| (ft_strcmp(".###..#.........", str) == 0) 
		|| (ft_strcmp(".....###..#.....", str) == 0) 
		|| (ft_strcmp(".........###..#.", str) == 0))
		return (TETRIS_1);
	else if ((ft_strcmp(".#..###.........", str) == 0) 
		|| (ft_strcmp(".....#..###.....", str) == 0) 
		| (ft_strcmp(".........#..###.", str) == 0) 
		| (ft_strcmp("..#..###........", str) == 0) 
		| (ft_strcmp("......#..###....", str) == 0) 
		| (ft_strcmp("..........#..###", str) == 0))
		return (TETRIS_2);
	return (find_piece_type_quad(str));
}

int		find_piece_type_quad(char *str)
{
	if ((ft_strcmp("#...##..#.......", str) == 0) 
		|| (ft_strcmp("....#...##..#...", str) == 0) 
		|| (ft_strcmp(".#...##..#......", str) == 0) 
		|| (ft_strcmp(".....#...##..#..", str) == 0) 
		|| (ft_strcmp("..#...##..#.....", str) == 0) 
		|| (ft_strcmp("......#...##..#.", str) == 0))
		return (TETRIS_3);
	else if ((ft_strcmp(".#..##...#......", str) == 0) 
		|| (ft_strcmp(".....#..##...#..", str) == 0) 
		|| (ft_strcmp("..#..##...#.....", str) == 0) 
		|| (ft_strcmp("......#..##...#.", str) == 0) 
		|| (ft_strcmp("...#..##...#....", str) == 0) 
		|| (ft_strcmp(".......#..##...#", str) == 0))
		return (TETRIS_4);
	return (find_piece_coudes(str));
}
