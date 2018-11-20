/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:12:52 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/20 16:02:33 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char const *s1, char const *s2)
{
	return (*s1 && *s2 && *s1 == *s2 ?
			ft_strcmp(++s1, ++s2) : (unsigned char)*s1 - (unsigned char)*s2);
}
