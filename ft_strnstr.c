/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:47 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/20 16:16:59 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s, char const *to_find, size_t len)
{
	size_t	i;
	char	*s_c;
	char	*to_find_c;

	if (!*to_find)
		return ((char *)s);
	while (len-- && *s)
	{
		if (*s == *to_find)
		{
			i = len;
			s_c = (char *)s + 1;
			to_find_c = (char *)to_find + 1;
			while (i-- && *s_c && *to_find_c && *s_c == *to_find_c)
			{
				++s_c;
				++to_find_c;
			}
			if (!*to_find_c)
				return ((char *)s);
		}
		++s;
	}
	return (NULL);
}
