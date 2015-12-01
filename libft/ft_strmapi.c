/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:38:51 by mdebelle          #+#    #+#             */
/*   Updated: 2013/11/22 10:38:53 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;
	int		j;

	if (s == NULL || (*f) == NULL)
		return (0);
	i = ft_strlen(s);
	dest = (char *)malloc(sizeof(*s) * (i));
	j = 0;
	while (j < i)
	{
		dest[j] = f(j, s[j]);
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
