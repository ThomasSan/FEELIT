/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:35:27 by mdebelle          #+#    #+#             */
/*   Updated: 2015/12/01 18:35:31 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BARE_1		1
# define BARE_2		2
# define COUDE_1	3
# define COUDE_2	4
# define COUDE_3	5
# define COUDE_4	6
# define COUDE_5	7
# define COUDE_6	8
# define COUDE_7	9
# define COUDE_8	10
# define CARRE		11
# define ZIGZAG_1	12
# define ZIGZAG_2	13
# define ZIGZAG_3	14
# define ZIGZAG_4	15
# define TETRIS_1	16
# define TETRIS_2	17
# define TETRIS_3	18
# define TETRIS_4	19

typedef struct		s_lst
{
	char			letter;
	int				used;
	int				type;
	int				pos[2];
	struct s_lst	*next;
}					t_lst;

int		checkfile(char *file, t_lst *list);
int		find_piece_type(char *str);

#endif
