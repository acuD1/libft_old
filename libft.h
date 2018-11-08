/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 11:08:12 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/08 19:16:35 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

/*
***		Part I
*/

int		ft_atoi(const char *s);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *d, const void *s, size_t n);
void	*ft_memccpy(void *d, const void *s, int c, size_t n);
void	*ft_memmove(void *d, const void *s, size_t len);
void	*ft_memset(void *s, int c, size_t len);
char	*ft_strcat(char *d, const char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *d, const char *s);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *d, const char *s, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *d, const char *s, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *d, const char *s, size_t n);
char	*ft_strnstr(char *s, const char *ndl, size_t len);
char	*ft_strstr(char *s, const char *ndl);

/*
***		Part II
*/

void	ft_putchcar(const char c);

/*
***		BONUS
*/

/*
***		My fonctions
*/

size_t	ft_strnlen(const char *s, size_t len);

#endif
