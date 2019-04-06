/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mprintf_tools.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:02:41 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/06 11:52:07 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*join_free(char *s1, char *s2)
{
	char *str;

	str = ft_strjoin(s1, s2);
	free(s1);
	free(s2);
	return (str);
}

static void	mprintf_padder(char *buff, char *tmp, t_mprintf *s_mpf)
{
	char *pad;
	char *var;

	if (s_mpf->pad)
	{
		var = ft_strncpy(ft_strnew(s_mpf->width), tmp, s_mpf->width);
		pad = ft_strnew(s_mpf->diff);
		ft_memset(pad, s_mpf->space, s_mpf->diff);
		if (s_mpf->neg)
			var = join_free(var, pad);
		else
			var = join_free(pad, var);
	}
	else
		var = ft_strdup(tmp);
	ft_strcat(buff, var);
	ft_strdel(&tmp);
	ft_strdel(&var);
}

int			buff_fill_int(int arg, char *buff, t_mprintf *s_mpf)
{
	char	*tmp;

	tmp = ft_itoa(arg);
	mprintf_padder(buff, tmp, s_mpf);
	return (1);
}

int			buff_fill_char(int arg, char *buff, t_mprintf *s_mpf)
{
	char *tmp;

	tmp = ft_strnew(1);
	s_mpf->width = 1;
	if (ft_isprint(arg))
		tmp[0] = arg;
	else
		*tmp = 0;
	mprintf_padder(buff, tmp, s_mpf);
	return (1);
}

int			buff_fill_str(char *arg, char *buff, t_mprintf *s_mpf)
{
	char *tmp;

	if (!(arg))
		tmp = ft_strdup("(null)");
	else
		tmp = ft_strdup(arg);
	mprintf_padder(buff, tmp, s_mpf);
	return (1);
}
