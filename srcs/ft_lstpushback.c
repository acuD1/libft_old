/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 14:58:06 by arsciand          #+#    #+#             */
/*   Updated: 2019/02/14 08:29:03 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstpushback(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	tmp = *alst;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*alst = new;
}
