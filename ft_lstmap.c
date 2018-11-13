/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:10:35 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/13 19:22:44 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*link;
	t_list	*new_link;
	t_list	*new_lst;

	link = lst;
	new_link = link;
	while (link != NULL)
	{
		f(link);
		if (!(new_lst = ft_memalloc(sizeof(t_list))))
			return (NULL);


		link = link->next;
	}
	return (new_lst);
}
