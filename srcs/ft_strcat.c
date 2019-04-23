/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:12:38 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/23 14:10:28 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *s)
{
	char	*tmp;

	tmp = dst;
	while (*tmp)
		tmp++;
	ft_strcpy(tmp, s);
	return (dst);
}
