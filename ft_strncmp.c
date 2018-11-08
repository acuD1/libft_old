/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:12 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/08 11:28:22 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	return (*s1 && *s2 && *s1 == *s2 && n != 1 ?
			ft_strncmp(++s1, ++s2, --n) :
			(unsigned char)*s1 - (unsigned char)*s2);
}
