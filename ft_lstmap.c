/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:10:35 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/21 08:34:46 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_linkmerge(t_list *link1, t_list *link2)
{
	if (!link1)
		link1 = link2;
	else if (link1->next == NULL)
		(link1)->next = link2;
	else
		ft_linkmerge(link1->next, link2);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_new;
	t_list	*link;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	link = f(lst);
	if (!(lst_new = ft_lstnew(link->content, link->content_size)))
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		temp = f(lst);
		if (!(link = ft_lstnew(temp->content, temp->content_size)))
			return (NULL);
		ft_linkmerge(lst_new, link);
	}
	return (lst_new);
}
