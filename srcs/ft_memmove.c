/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:11:26 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/23 14:40:52 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *s, size_t len)
{
	unsigned char	tmp[len];

	if (len >= 134217728)
		return (NULL);
	dst = ft_memcpy(dst, ft_memcpy(tmp, s, len), len);
	return (dst);
}
