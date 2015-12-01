/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:03:55 by mdebelle          #+#    #+#             */
/*   Updated: 2013/11/20 17:08:28 by mdebelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_sizenum(int n)
{
	int				i;
	unsigned int	uns_n;

	i = 0;
	if (n != 0)
	{
		if (n < 0)
		{
			n = n * (-1);
			i++;
		}
		uns_n = (n);
		while (uns_n > 9)
		{
			uns_n /= 10;
			i++;
		}
	}
	else
		i = 1;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*s;
	int				i;
	unsigned int	uns_n;

	i = ft_sizenum(n);
	s = (char *)malloc(sizeof(char) * (i + 1));
	s[i + 1] = '\0';
	if (n != 0)
	{
		if (n < 0)
		{
			s[0] = '-';
			n = n * (-1);
		}
		uns_n = (n);
		while (uns_n > 0)
		{
			s[i] = (uns_n % 10 + 48);
			uns_n = uns_n / 10;
			i--;
		}
	}
	else
		s[0] = '0';
	return (s);
}
