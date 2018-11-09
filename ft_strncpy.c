/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:20 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/09 10:03:42 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncpy(char *dst, const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s[i])
	{
		dst[i] = s[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
