/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:13:47 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/07 18:20:01 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t size)
{
	size_t i;
	size_t d_len;

	i = 0;
	d_len = ft_strlen(d);
	if (d_len >= size)
		return (size + ft_strlen(s));
	while ((d_len + i + 1) < size)
	{
		d[i + d_len] = s[i];
		i++;
	}
	d[i + d_len] = '\0';
	return (d_len + ft_strlen(s));
}
