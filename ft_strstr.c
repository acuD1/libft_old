/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:59 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/07 18:30:05 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *s, const char *n)
{
	size_t i;
	size_t j;
	size_t n_len;

	i = 0;
	j = 0;
	n_len = ft_strlen(n);
	if (!*n)
		return (s);
	while (s[i])
	{
		while (n[j] == s[i + j])
		{
			if (j == n_len - 1)
				return (s + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
