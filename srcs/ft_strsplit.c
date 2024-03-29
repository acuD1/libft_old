/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:54 by arsciand          #+#    #+#             */
/*   Updated: 2019/06/27 17:09:57 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char *charset)
{
	size_t	n_words;

	n_words = 0;
	while (*s)
	{
		if (ft_strchr(charset, *s))
			s++;
		else
		{
			while (!(ft_strchr(charset, *s)) && *s)
				s++;
			n_words++;
		}
	}
	return (n_words);
}

char			**ft_strsplit(const char *s, char *charset)
{
	size_t	i;
	size_t	len;
	size_t	j;
	char	**tab;

	i = 0;
	j = 0;
	len = 0;
	if (!charset || !s)
		return (NULL);
	if (!(tab = ft_memalloc(sizeof(tab) * (count_words(s, charset) + 1))))
		return (NULL);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i + len] && !(ft_strchr(charset, s[i + len])))
			len++;
		if (len)
			tab[j++] = ft_strsub(s, i, len);
		i += len ? len : 1;
		len = 0;
	}
	tab[j] = NULL;
	return (tab);
}
