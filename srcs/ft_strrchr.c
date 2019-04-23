/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:50 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/23 15:14:34 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (!s)
		return (NULL);
	while (--len > -1)
		if ((char)c == s[len])
			return ((char *)&s[len]);
	return (!(char)c ? (char *)&s[ft_strlen(s)] : NULL);
}
