
#include "fillit.h"

void	ft_rmsquare(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 1) < size && (elem->pos[1] + 1) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1]] = '.';
			tab[elem->pos[0]][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 1][elem->pos[1]] = '.';
			elem->used = 1;
		}
}

void	ft_rmzigzag1(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 1) < size && (elem->pos[1] + 2) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 2] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1]] = '.';
			tab[elem->pos[0]][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 2] = '.';
			elem->used = 1;
		}
}

void	ft_rmzigzag2(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 1) < size && (elem->pos[1] + 2) < size)
		if ((tab[elem->pos[0]][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 2] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1] + 1] = '.';
			tab[elem->pos[0]][elem->pos[1] + 2] = '.';
			tab[elem->pos[0] + 1][elem->pos[1]] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = '.';
			elem->used = 1;
		}
}

void	ft_rmzigzag3(t_lst *elem, char **tab, int size)
{ 
	if ((elem->pos[0] + 2) < size && (elem->pos[1] + 1) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 2][elem->pos[1] + 1] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1]] = '.';
			tab[elem->pos[0] + 1][elem->pos[1]] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 2][elem->pos[1] + 1] = '.';
			elem->used = 1;
		}
}

void	ft_rmzigzag4(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 2) < size && (elem->pos[1] + 1) < size)
		if ((tab[elem->pos[0]][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 2][elem->pos[1]] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 1][elem->pos[1]] = '.';
			tab[elem->pos[0] + 2][elem->pos[1]] = '.';
			elem->used = 1;
		}
}
