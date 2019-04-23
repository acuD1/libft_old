/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:19:40 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/23 14:59:28 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list *lst, void *content_ref, int (*cmp)())
{
	t_list	*link;

	link = lst;
	if (!lst)
		return (NULL);
	while (link != NULL)
	{
		if (cmp(link->content, content_ref) == 0)
			return (link);
		link = link->next;
	}
	return (NULL);
}
