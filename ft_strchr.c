/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:12:43 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/19 08:31:12 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	while (*s)
	{
		if ((char)c == *s)
			return ((char*)s);
		s++;
	}
	return (!(char)c ? (char *)&s[ft_strlen(s)] : NULL);
}
