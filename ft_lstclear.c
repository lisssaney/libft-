/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbump <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:06:30 by gbump             #+#    #+#             */
/*   Updated: 2020/11/13 15:55:40 by gbump            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *i;
	t_list *j;

	i = *lst;
	while (i)
	{
		j = i->next;
		if (del)
			del(i->content);
		free(i);
		i = j;
	}
	*lst = NULL;
}
