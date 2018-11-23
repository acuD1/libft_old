/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:12 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/20 16:16:36 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (0);
	return (*s1 && *s2 && *s1 == *s2 ?
			ft_strncmp(++s1, ++s2, --n) :
			(unsigned char)*s1 - (unsigned char)*s2);
}
