/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:12:38 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/07 18:10:21 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *d, const char *s)
{
	size_t i;
	size_t d_len;

	i = 0;
	d_len = ft_strlen(d);
	while (i <= ft_strlen(s))
	{
		d[i + d_len] = s[i];
		i++;
	}
	return (d);
}
