/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:24:24 by gbump             #+#    #+#             */
/*   Updated: 2020/11/13 15:52:55 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len1(unsigned int a)
{
	unsigned int b;

	b = 0;
	while (a >= 10)
	{
		a /= 10;
		b++;
	}
	return (b + 1);
}

char			*ft_itoa(int n)
{
	char			*a;
	unsigned int	b;
	unsigned int	c;
	unsigned int	d;

	d = 0;
	c = (n < 0 ? -n : n);
	b = len1(c);
	if (!(a = (char *)malloc(sizeof(char) * b + 1 + (n < 0 ? 1 : 0))))
		return (NULL);
	if (n < 0)
	{
		a[d] = '-';
		b++;
	}
	d = b - 1;
	while (c >= 10)
	{
		a[d] = c % 10 + '0';
		c /= 10;
		d--;
	}
	a[d] = c % 10 + '0';
	a[b] = '\0';
	return (a);
}
