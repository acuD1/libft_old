/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:13:47 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/09 10:02:50 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *s, size_t len)
{
	size_t i;
	size_t dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	if (dst_len >= len)
		return (len + ft_strlen(s));
	while ((dst_len + i + 1) < len)
	{
		dst[i + dst_len] = s[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + ft_strlen(s));
}
