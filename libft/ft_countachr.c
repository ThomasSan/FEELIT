/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countachr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 16:51:15 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/26 16:57:34 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_countachr(const char *s, int c)
{
	int		i;
	int		nbc;

	i = 0;
	nbc = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			nbc++;
		i++;
	}
	return (nbc);
}