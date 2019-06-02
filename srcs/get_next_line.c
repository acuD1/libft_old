/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:50:58 by arsciand          #+#    #+#             */
/*   Updated: 2019/06/02 13:59:10 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

static int	check_line(char **stack)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = *stack;
	while (tmp[i] != '\n')
		if (!(tmp[i++]))
			return (0);
	return (1);
}

static int	init(int const fd, char **line, char **stack)
{
	if (fd == -1 || FD_MAXSET > 4864 || BUFF_SIZE < 1 || !line
			|| (!(stack[fd]) && !(stack[fd] = ft_strnew(0))))
		return (0);
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	static char	*stack[FD_MAXSET];
	char		buff[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if ((read(fd, buff, 0) == -1) || !(init(fd, line, stack)))
		return (-1);
	while (!(check_line(&stack[fd])) && (ret = read(fd, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		tmp = stack[fd];
		stack[fd] = ft_strjoinf(tmp, buff, 1);
	}
	ft_bzero(buff, BUFF_SIZE);
	*line = ft_strsub(stack[fd], 0, ft_strclen(stack[fd], '\n'));
	if (*stack[fd])
	{
		if (check_line(&stack[fd]))
			ft_strcpy(stack[fd], ft_strchr(stack[fd], '\n') + 1);
		ft_strdel(&stack[fd]);
		return (1);
	}
	return (0);
}
