/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 15:11:59 by arsciand          #+#    #+#             */
/*   Updated: 2019/05/10 15:15:04 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void		ft_free_tab(char ***tab)
{
	char	**tmp;
	size_t	i;

	if (!*tab)
		return ;
	tmp = *tab;
	i = 0;
	if (*tab)
	{
		while (tmp[i])
			free(tmp[i++]);
		free(*tab);
	}
	*tab = NULL;
}
