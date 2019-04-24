/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:03:27 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/24 09:04:39 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *s, int c, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_s;

	if (!n)
		return (NULL);
	tmp_dst = dst;
	tmp_s = s;
	while (n--)
	{
		*tmp_dst = *tmp_s;
		if (*tmp_s == (unsigned char)c)
			return (tmp_dst + 1);
		tmp_dst++;
		tmp_s++;
	}
	return (NULL);
}
