/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:09:37 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/13 10:28:38 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*ft_strlendup(char *s, size_t len)
{
	char	*dst;

	dst = ft_memalloc(sizeof(char) * (len));
	ft_strcpy(dst, s);
	return (dst);
}

static int		count_n_len(int n)
{
	int len;
	int zero;

	len = 0;
	zero = 0;
	if (n == 0)
		zero++;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len + zero + 1);
}

static void		do_conv(char *s, int n)
{
	size_t	i;
	int		sign;

	i = 0;
	sign = n;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		s[i++] = n % 10 + '0';
		n /= 10;
	}
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
}

char			*ft_itoa(int n)
{
	int			len;
	char		*s;

	len = count_n_len(n);
	if (n == 0)
		return (ft_strlendup("0", len));
	if (n == -2147483648)
		return (ft_strlendup("-2147483648", len));
	if (!(s = ft_strnew(len)))
		return (NULL);
	do_conv(s, n);
	return (ft_strrev(s));
}
