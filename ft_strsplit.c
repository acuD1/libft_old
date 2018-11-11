/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:14:54 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/11 15:38:19 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(const char *s, char c)
{
	size_t n_words;

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

static void		do_print(const char *s, char *tab, size_t i, size_t j)
{
	size_t i_words;

	i_words = 0;
	while (i_words < j)
	{
		tab[i_words] = s[i + i_words];
		i_words++;
	}
	tab[i_words] = '\0';
}

static void		do_split(const char *s, char **tab, char c, size_t i)
{
	size_t j;
	size_t i_words;

	i_words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			if (!(tab[i_words] = malloc(sizeof(char) * (j + 1))))
				return ;
			do_print(s, tab[i_words], i, j);
			i += j;
			i_words++;
		}
	}
	tab[i_words] = NULL;
}

char			**ft_strsplit(const char *s, char c)
{
	size_t	n_words;
	char	**tab;

	tab = NULL;
	if (s && c)
	{
		n_words = count_words(s, c);
		if (!(tab = malloc(sizeof(char *) * (n_words + 1))))
			return (NULL);
		do_split(s, tab, c, 0);
		return (tab);
	}
	return (NULL);
}
