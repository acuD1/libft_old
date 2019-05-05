/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 14:38:35 by arsciand          #+#    #+#             */
/*   Updated: 2019/05/05 15:55:25 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoinf(char *s1, char *s2, int vars)
{
	char	*str;

	str = ft_strjoin(s1, s2);
	if (vars == 0)
		return (str);
	else if (vars == 1)
		free(s1);
	else if (vars == 2)
		free(s2);
	else
	{
		free(s1);
		free(s2);
	}
	return (str);
}
