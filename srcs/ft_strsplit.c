/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:54 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/23 14:56:44 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	n_words;

	n_words = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s != c && *s)
				s++;
			n_words++;
		}
	}
	return (n_words);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	j;
	char	**tab;

	i = 0;
	j = 0;
	len = 0;
	if (!c || !s)
		return (NULL);
	if (!(tab = ft_memalloc(sizeof(tab) * (count_words(s, c) + 1))))
		return (NULL);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i + len] && s[i + len] != c)
			len++;
		if (len)
			tab[j++] = ft_strsub(s, i, len);
		i += len ? len : 1;
		len = 0;
	}
	tab[j] = NULL;
	return (tab);
}
