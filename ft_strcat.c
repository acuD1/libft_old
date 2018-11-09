/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:12:38 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/09 10:00:26 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *s)
{
	size_t i;
	size_t dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	while (i <= ft_strlen(s))
	{
		dst[i + dst_len] = s[i];
		i++;
	}
	return (dst);
}
