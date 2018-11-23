/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:44:07 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/23 18:30:54 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(char const *s, int c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}
