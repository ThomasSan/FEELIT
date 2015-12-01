/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dub <dub@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:23:12 by mdebelle          #+#    #+#             */
/*   Updated: 2015/10/01 19:21:41 by dub              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_strchrpos(char const *s, char c)
{
	size_t			pos;

	pos = 0;
	while (*s != c && *s)
	{
		pos++;
		s++;
	}
	return (pos);
}

static char			**ft_splitit(char const *s, char **tab, char c)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			tab[j++] = ft_strsub(s, i, ft_strchrpos(&s[i], c));
			i = i + ft_strchrpos(&s[i], c);
		}
		else
			i++;
	}
	return (tab);
}

char				**ft_strsplit(char const *s, char c)
{
	int				i;
	int				w;
	char			**tab;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && ((i != 0 && s[i - 1] == c) || i == 0))
			w++;
		i++;
	}
	if ((tab = (char**)(malloc(sizeof(tab) * (w + 1)))) == NULL)
		return (NULL);
	while (w != -1)
		tab[w--] = NULL;
	tab = ft_splitit(s, tab, c);
	return (tab);
}
