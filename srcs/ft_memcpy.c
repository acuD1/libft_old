/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:11:10 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/23 13:12:38 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *s, size_t n)
{
	size_t		i;
	char		*tmp_dst;
	const char	*tmp_s;

	i = 0;
	tmp_dst = dst;
	tmp_s = s;
	while (n--)
	{
		tmp_dst[i] = tmp_s[i];
		i++;
	}
	return (dst);
}
