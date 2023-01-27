/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:13:49 by gbump             #+#    #+#             */
/*   Updated: 2020/11/13 15:49:05 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		cword(char const *s, char c)
{
	int	w;

	w = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			w++;
		s++;
	}
	return (w);
}

static int		wordl(char const *s, char c)
{
	int	l;

	l = 0;
	while (*s != c && *s)
	{
		l++;
		s++;
	}
	return (l);
}

static void		*freefunction(char **func, int w)
{
	int	i;

	i = 0;
	while (i < w)
	{
		free(func[i]);
		i++;
	}
	free(func);
	return (NULL);
}

static char		**put(char const *s, int w, char c, char **func)
{
	int		i;
	int		j;
	int		l;

	i = -1;
	while (++i < w)
	{
		while (*s == c)
			s++;
		l = wordl(s, c);
		if (!(func[i] = (char *)malloc(sizeof(char) * (l + 1))))
			return (freefunction(func, i));
		j = 0;
		while (j < l)
			func[i][j++] = *s++;
		func[i][j] = '\0';
	}
	func[i] = NULL;
	return (func);
}

char			**ft_split(char	const *s, char c)
{
	char	**func;
	int		w;

	if (!s)
		return (NULL);
	w = cword(s, c);
	if (!(func = (char **)malloc(sizeof(char *) * (w + 1))))
		return (NULL);
	func = put(s, w, c, func);
	return (func);
}
