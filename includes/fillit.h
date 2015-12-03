/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:35:27 by mdebelle          #+#    #+#             */
/*   Updated: 2015/12/03 15:20:02 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BARRE_1	1
# define BARRE_2	2
# define COUDE_1	3
# define COUDE_2	4
# define COUDE_3	5
# define COUDE_4	6
# define COUDE_5	7
# define COUDE_6	8
# define COUDE_7	9
# define COUDE_8	10
# define SQUARE		11
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

int					checkfile(char *file, t_lst *list);
int					find_piece_type(char *str);
int					find_piece_type_bis(char *str);
int					find_piece_type_ter(char *str);
int					find_piece_type_quad(char *str);
int					find_piece_type_quint(char *str);
int					find_piece_coudes(char *str);
int					find_piece_coudes_bis(char *str);
int					find_piece_coudes_ter(char *str);
int					find_piece_square(char *str);
void				ft_newnode(t_lst *l, int i, int type);
void				show_list(t_lst *l);

#endif
