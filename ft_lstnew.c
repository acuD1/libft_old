/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:50:29 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/20 16:22:12 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;
	void	*elem_cpy;

	if (!(link = ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		link->content = NULL;
		link->content_size = 0;
		link->next = NULL;
		return (link);
	}
	if (!(elem_cpy = ft_memalloc(content_size)))
	{
		free(link);
		return (NULL);
	}
	ft_memcpy(elem_cpy, content, content_size);
	link->content = elem_cpy;
	link->content_size = content_size;
	link->next = NULL;
	return (link);
}
