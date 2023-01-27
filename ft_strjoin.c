/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:57:51 by gbump             #+#    #+#             */
/*   Updated: 2020/11/13 15:47:45 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		b;
	int		c;
	char	*d;

	if (!s1 || !s2)
		return (NULL);
	b = ft_strlen((char *)s1);
	c = ft_strlen((char *)s2);
	if (!(d = (char *)malloc(sizeof(char) * (b + c + 1))))
		return (NULL);
	c = 0;
	while (s1[c])
	{
		d[c] = s1[c];
		c++;
	}
	c = 0;
	while (s2[c])
	{
		d[b] = s2[c];
		b++;
		c++;
	}
	d[b] = '\0';
	return (d);
}
