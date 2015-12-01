/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:16:36 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 12:04:01 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	j = s1[i] - s2[i];
	if (j > 0)
		return (j);
	else if (j < -127)
		return (1);
	else if (j < 0)
		return (j);
	return (0);
}
