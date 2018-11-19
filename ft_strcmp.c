/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:12:52 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/19 08:31:27 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char const *s1, char const *s2)
{
	return (*s1 && *s2 && *s1 == *s2 ?
			ft_strcmp(++s1, ++s2) : (unsigned char)*s1 - (unsigned char)*s2);
}
