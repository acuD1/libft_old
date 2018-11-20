/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:11:26 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/20 16:13:21 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *s, size_t len)
{
	unsigned char	tmp[len];

	if (len >= 134217728)
		return (NULL);
	ft_memcpy(tmp, s, len);
	dst = ft_memcpy(dst, tmp, len);
	return (dst);
}
