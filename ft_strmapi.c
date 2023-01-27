/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:35:02 by gbump             #+#    #+#             */
/*   Updated: 2020/11/13 15:45:50 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*j;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(j = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		return (NULL);
	while (i < ft_strlen((char *)s))
	{
		j[i] = f(i, s[i]);
		i++;
	}
	j[i] = '\0';
	return (j);
}
