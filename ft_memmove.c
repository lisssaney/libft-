/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 17:30:54 by gbump             #+#    #+#             */
/*   Updated: 2020/11/13 15:40:50 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	unsigned char		*s2;
	size_t				i;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	i = 0;
	if (!n || s1 == s2)
		return (dst);
	if (s2 < s1)
	{
		while (i++ < n)
			s1[n - i] = s2[n - i];
	}
	else
	{
		while (n-- != 0)
			*s1++ = *s2++;
	}
	return (dst);
}
