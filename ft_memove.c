/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:11:26 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/08 18:52:04 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t len)
{
	unsigned char	tmp[len];

	if (len >= 134217728)
		return (NULL);
	ft_memcpy(tmp, s, len);
	d = ft_memcpy(d, tmp, len);
	return (d);
}
