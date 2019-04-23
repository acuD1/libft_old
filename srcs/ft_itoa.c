/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:09:37 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/23 15:34:25 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n_len(int n)
{
	int		i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	do_conv(char *buffer, long n, int i)
{
	if (n > 0)
	{
		do_conv(buffer, n / 10, --i);
		buffer[i] = n % 10 + '0';
	}
}

char		*ft_itoa(int n)
{
	size_t	len;
	char	s[12];

	ft_bzero(s, 12);
	len = count_n_len(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		s[0] = '-';
		do_conv(s + 1, -(long)n, len);
	}
	else
		do_conv(s + 0, (long)n, len);
	return (ft_strdup(s));
}
