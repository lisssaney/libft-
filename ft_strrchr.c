/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:59:48 by gbump             #+#    #+#             */
/*   Updated: 2020/11/13 15:42:13 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int s)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	if (s == '\0')
		return ((char *)&str[i]);
	while (i--)
		if (str[i] == s)
			return ((char *)&str[i]);
	return (NULL);
}
