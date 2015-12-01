/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:15:16 by mdebelle          #+#    #+#             */
/*   Updated: 2013/11/22 10:15:20 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int		i;
	int		j;

	if (s == NULL || (*f) == NULL)
		return (0);
	i = ft_strlen(s);
	dest = (char*)malloc(sizeof(*s) * (i));
	j = 0;
	while (j < i)
	{
		dest[j] = f(s[j]);
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
