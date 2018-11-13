/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:13:24 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/13 11:48:34 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dst;

	len = ft_strlen(s);
	if (!(dst = (char *)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strcpy(dst, s);
	return (dst);
}
