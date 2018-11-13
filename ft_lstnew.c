/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:50:29 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/13 17:55:47 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*elem;
	void	*elem_cpy;

	if (!(elem = ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		elem->content = NULL;
		elem->content_size = 0;
		elem->next = NULL;
		return (elem);
	}
	if (!(elem_cpy = ft_memalloc(content_size)))
	{
		free(elem);
		return (NULL);
	}
	ft_memcpy(elem_cpy, content, content_size);
	elem->content = elem_cpy;
	elem->content_size = content_size;
	elem->next = NULL;
	return (elem);
}
