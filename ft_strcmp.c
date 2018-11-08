/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:12:52 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/08 11:27:48 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	return (*s1 && *s2 && *s1 == *s2 ?
			ft_strcmp(++s1, ++s2) : (unsigned char)*s1 - (unsigned char)*s2);
}
