/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:15:06 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/11 15:43:53 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	len;

	if (s)
	{
		i = 0;
		len = ft_strlen(s);
		while (s && ft_isspace(s[i]))
			i++;
		while (len > i && ft_isspace(s[len - 1]))
			len--;
		return (ft_strsub(s, i, len - i));
	}
	return (NULL);
}
