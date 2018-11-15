/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:10:02 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/15 12:08:53 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*link;

	link = *alst;
	if (!*alst || !del)
		return ;
	while (link)
	{
		del(link->content, link->content_size);
		free(link);
		link = link->next;
	}
	*alst = NULL;
}
