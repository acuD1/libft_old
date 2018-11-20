/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:03:27 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/20 16:56:53 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void const *s, int c, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *)dst++ = *(unsigned char *)s;
		if ((unsigned char)c == *(unsigned char *)s)
			return (dst);
		s++;
		n--;
	}
	return (NULL);
}
