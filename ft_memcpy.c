/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:11:10 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/09 09:58:57 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *s, size_t n)
{
	char		*ptr_dst;
	const char	*ptr_s;

	ptr_dst = dst;
	ptr_s = s;
	while (n--)
		*ptr_dst++ = *ptr_s++;
	return (dst);
}
