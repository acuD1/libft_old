/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:11:10 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/20 16:53:58 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *s, size_t n)
{
	char		*ptr_dst;
	char const	*ptr_s;

	ptr_dst = dst;
	ptr_s = s;
	while (n--)
		*(ptr_dst)++ = *(ptr_s)++;
	return (dst);
}
