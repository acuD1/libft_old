/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 11:08:12 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/10 17:07:56 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define INTMIN 217

# include <string.h>

/*
**		Part I
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
void	*ft_memccpy(void *dst, const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *s, size_t n);
void	*ft_memmove(void *dst, const void *s, size_t len);
void	*ft_memset(void *s, int c, size_t len);
char	*ft_strcat(char *dst, const char *s);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *s);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *s, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *dst, const char *s, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *s, size_t n);
char	*ft_strnstr(char *s, const char *ndl, size_t len);
char	*ft_strstr(char *s, const char *ndl);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*
**		Part II
*/

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int nb);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putstr(char const *s);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strsub(const char *s, unsigned int start, size_t len);

/*
**		BONUS
*/

/*
**		My fonctions
*/

size_t	ft_strnlen(const char *s, size_t len);

#endif
