/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:11:10 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/08 16:08:57 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	char		*p_d;
	const char	*p_s;

	p_d = d;
	p_s = s;
	while (n--)
		*p_d++ = *p_s++;
	return (d);
}
