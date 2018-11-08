/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:03:27 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/08 17:20:58 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	if (!n || n == 1)
		return (NULL);
	while (n--)
	{
		*(unsigned char*)d++ = *(unsigned char *)s;
		if ((unsigned char)c == *(unsigned char*)s)
			return (d);
		s++;
	}
	return (NULL);
}
