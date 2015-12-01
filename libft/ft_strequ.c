/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:35:57 by mdebelle          #+#    #+#             */
/*   Updated: 2013/11/21 17:35:59 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	if (s1[i] == s2[i])
	{
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
			i++;
	}
	if (s1[i] < s2[i] || s1[i] > s2[i])
		return (0);
	return (1);
}