/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:59 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/20 16:17:16 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *s, char const *ndl)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*ndl)
		return ((char *)s);
	while (s[i])
	{
		while (ndl[j] && ndl[j] == s[i + j])
			j++;
		if (!ndl[j])
			return ((char *)s + i);
		j = 0;
		i++;
	}
	return (NULL);
}
