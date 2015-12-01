/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:58:23 by mdebelle          #+#    #+#             */
/*   Updated: 2013/11/22 12:58:27 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_del_after(int i, char const *s)
{
	while (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t')
		i--;
	return (i);
}

static int		ft_del_before(char const *s)
{
	int			k;

	k = 0;
	while (s[k] == ' ' || s[k] == '\n' || s[k] == '\t')
		k++;
	return (k);
}

char			*ft_strtrim(char const *s)
{
	int			i;
	int			j;
	int			k;
	char		*dest;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	i = ft_del_after(i, s);
	k = ft_del_before(s);
	i = i - k;
	if (i <= 0)
		i = 0;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	j = 0;
	while (j < i)
	{
		dest[j] = s[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
