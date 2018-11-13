/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:13:47 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/13 17:44:56 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *s, size_t len)
{
	size_t	i;
	size_t	dst_len;
	size_t	s_len;

	i = 0;
	dst_len = ft_strlen(dst);
	s_len = ft_strlen(s);
	if (dst_len >= len)
		return (len + s_len);
	while (dst[i] && i < len - 1)
		i++;
	while (*s && i < len - 1)
	{
		dst[i] = *s++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len + s_len);
}
