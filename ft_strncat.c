/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:09 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/08 11:28:31 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *d, const char *s, size_t n)
{
	size_t i;
	size_t d_len;

	i = 0;
	d_len = ft_strlen(d);
	while (i < n && s[i])
	{
		d[i + d_len] = s[i];
		i++;
	}
	d[i + d_len] = '\0';
	return (d);
}
