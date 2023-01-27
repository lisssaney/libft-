/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:54:54 by gbump             #+#    #+#             */
/*   Updated: 2020/11/10 13:35:19 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned int	total;
	char			*a;
	unsigned int	i;

	i = 0;
	total = number * size;
	if (!(a = malloc(total)))
		return (NULL);
	while (total--)
	{
		a[i] = 0;
		i++;
	}
	return ((void *)a);
}
