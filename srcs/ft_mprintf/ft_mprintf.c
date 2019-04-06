/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 08:54:05 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/06 11:51:36 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>

static int	s_mpf_padding(t_mprintf *s_mpf, int indent, int width)
{
	s_mpf->pad = 1;
	s_mpf->indent = indent;
	s_mpf->width = width;
	s_mpf->diff = s_mpf->indent - s_mpf->width;
	s_mpf->space = ' ';
	return (1);
}

static int	get_args(va_list args, char *buff, char *str)
{
	int			i;
	t_mprintf	*s_mpf;

	i = 0;
	if (!(s_mpf = (t_mprintf*)malloc(sizeof(t_mprintf))))
		return (0);
	ft_bzero(s_mpf, sizeof(t_mprintf));
	while (str[i] && ft_strchr("%dcs-.*", str[i]))
	{
		if (str[i] == '-')
			s_mpf->neg = 1;
		else if (str[i] == '*' && str[i + 1] == '.' && str[i + 2] == '*')
			s_mpf_padding(s_mpf, va_arg(args, int), va_arg(args, int));
		else if (str[i] == 'd')
			buff_fill_int(va_arg(args, int), buff, s_mpf);
		else if (str[i] == 'c')
			buff_fill_char(va_arg(args, int), buff, s_mpf);
		else if (str[i] == 's')
			buff_fill_str(va_arg(args, char *), buff, s_mpf);
		i++;
	}
	ft_strdel(&str);
	free(s_mpf);
	return (i);
}

void		ft_mprintf(int fd, const char *str, ...)
{
	va_list		args;
	char		*buff;

	va_start(args, str);
	buff = ft_strnew(BUFF_SIZE + 1);
	while (*str)
	{
		if (*str == '%')
			str += get_args(args, buff, ft_strdup(str)) - 1;
		else
			ft_strncat(buff, str, 1);
		str++;
	}
	ft_putstr_fd(buff, fd);
	ft_bzero(buff, BUFF_SIZE);
	ft_strdel(&buff);
	va_end(args);
}
