/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:26:39 by gbump             #+#    #+#             */
/*   Updated: 2020/11/10 16:22:34 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*str1;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (!(str1 = (char*)malloc(sizeof(*str1) * (i + 1))))
	{
		return (NULL);
	}
	j = 0;
	while (j < i)
	{
		str1[j] = str[j];
		j++;
	}
	str1[j] = '\0';
	return (str1);
}
