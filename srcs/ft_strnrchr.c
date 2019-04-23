/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 14:11:11 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/23 14:57:08 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnrchr(const char *s, char c)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	if (c == '\0')
		return (i);
	while (s[i] && s[i] != c)
		i--;
	return (i + 1);
}
