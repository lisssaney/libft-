/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:10:45 by gbump             #+#    #+#             */
/*   Updated: 2020/11/12 19:16:24 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *in, const char *put, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*put)
		return ((char *)in);
	while (in[i] && i < len)
	{
		if (in[i] == put[0])
		{
			j = 1;
			while (put[j] && in[i + j] == put[j] && i + j < len)
				j++;
			if (put[j] == '\0')
				return ((char *)&in[i]);
		}
		i++;
	}
	return (0);
}
