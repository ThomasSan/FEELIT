/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:58:30 by mdebelle          #+#    #+#             */
/*   Updated: 2015/01/22 12:32:41 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(const char *str)
{
	int		nb;
	int		i;
	int		neg;

	nb = 0;
	i = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 14) || str[i] == ' ')
		i++;
	if (!((str[i] >= '0' && str[i] <= '9')
		|| (str[i] == '+') || (str[i] == '-')))
		return (nb);
	if (str[i] == '+' || str[i] == '-')
		neg = 44 - str[i++];
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * neg);
}
