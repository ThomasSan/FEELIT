#include "fillit.h"
#include "libft.h"

void	ft_rmbarre1(t_lst *elem, char **tab, int size)
{
		if ((elem->pos[0] + 3) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 2][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 3][elem->pos[1]] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1]] = '.';
			tab[elem->pos[0] + 1][elem->pos[1]] = '.';
			tab[elem->pos[0] + 2][elem->pos[1]] = '.';
			tab[elem->pos[0] + 3][elem->pos[1]] = '.';
			elem->used = 0;
		}
}

void	ft_rmbarre2(t_lst *elem, char **tab, int size)
{
		if ((elem->pos[1] + 3) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 2] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 3] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1]] = '.';
			tab[elem->pos[0]][elem->pos[1] + 1] = '.';
			tab[elem->pos[0]][elem->pos[1] + 2] = '.';
			tab[elem->pos[0]][elem->pos[1] + 3] = '.';
			elem->used = 0;
		}
}

void	ft_rmcoude1(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 1) < size && (elem->pos[1] + 2) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 2] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1]] = '.';
			tab[elem->pos[0]][elem->pos[1] + 1] = '.';
			tab[elem->pos[0]][elem->pos[1] + 2] = '.';
			tab[elem->pos[0] + 1][elem->pos[1]] = '.';
			elem->used = 0;
		}
}

void	ft_rmcoude2(t_lst *elem, char **tab, int size)
{
		if ((elem->pos[0] + 1) < size && (elem->pos[1] + 2) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0]][elem->pos[1] + 2] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 2] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1]] = '.';
			tab[elem->pos[0]][elem->pos[1] + 1] = '.';
			tab[elem->pos[0]][elem->pos[1] + 2] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 2] = '.';
			elem->used = 0;
		}
}

void	ft_rmcoude3(t_lst *elem, char **tab, int size)
{
	if ((elem->pos[0] + 1) < size && (elem->pos[1] + 2) < size)
		if ((tab[elem->pos[0]][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1]] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 1] == elem->letter)
				&& (tab[elem->pos[0] + 1][elem->pos[1] + 2] == elem->letter))
		{
			tab[elem->pos[0]][elem->pos[1]] = '.';
			tab[elem->pos[0] + 1][elem->pos[1]] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 1] = '.';
			tab[elem->pos[0] + 1][elem->pos[1] + 2] = '.';
			elem->used = 0;
		}
}
