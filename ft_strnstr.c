/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:47 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/08 14:43:07 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s, const char *ndl, size_t len)
{
	size_t	i;
	char	*s_c;
	char	*ndl_c;

	if (!*ndl)
		return (s);
	while (len-- && *s)
	{
		if (*s == *ndl)
		{
			i = len;
			s_c = s + 1;
			ndl_c = (char *)ndl + 1;
			while (i-- && *s_c && *ndl_c && *s_c == *ndl_c)
			{
				++s_c;
				++ndl_c;
			}
			if (!*ndl_c)
				return (s);
		}
		++s;
	}
	return (NULL);
}
