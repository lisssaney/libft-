/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:01:43 by gbump             #+#    #+#             */
/*   Updated: 2020/11/12 18:09:01 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t a;
	size_t b;
	size_t c;

	a = 0;
	b = 0;
	c = 0;
	while (dst[b] && b < size)
		b++;
	while (src[c] && size > b + c + 1)
	{
		dst[b + c] = src[c];
		c++;
	}
	while (src[a])
		a++;
	if (b < size)
		dst[b + c] = '\0';
	return (a + b);
}
