/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:30:22 by gbump             #+#    #+#             */
/*   Updated: 2020/11/10 14:18:33 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const char *s1, const char *s2, unsigned int n)
{
	const unsigned char *c;
	const unsigned char *d;

	c = (const unsigned char *)s1;
	d = (const unsigned char *)s2;
	if (s1 == s2 || n == 0)
	{
		return (0);
	}
	while (n)
	{
		if (*c != *d)
		{
			return (*c - *d);
		}
		if (n != 0)
		{
			c++;
			d++;
		}
		n--;
	}
	return (0);
}
