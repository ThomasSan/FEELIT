/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:49:41 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 11:58:19 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		i--;
	}
	return (0);
}
