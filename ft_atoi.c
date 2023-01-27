/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:23:51 by gbump             #+#    #+#             */
/*   Updated: 2020/11/12 19:29:24 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 1;
	if (str[a] == '\0')
		return (0);
	while (str[a] == '\n' || str[a] == '\r' || str[a] == '\t'
			|| str[a] == '\v' || str[a] == ' ' || str[a] == '\f')
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			c = -c;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
		b = (b * 10) + (str[a++] - 48);
	return (b * c);
}
