/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:51:19 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/21 09:40:54 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	size_t	len;
	size_t	i;
	char	tmp;

	i = 0;
	len = ft_strlen(s) - 1;
	while (i < len)
	{
		tmp = s[len];
		s[len] = s[i];
		s[i] = tmp;
		i++;
		len--;
	}
	return (s);
}
