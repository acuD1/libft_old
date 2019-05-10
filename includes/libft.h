/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 11:08:12 by arsciand          #+#    #+#             */
/*   Updated: 2019/05/10 15:13:58 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFF_SIZE 4096
# define FD_MAXSET 4864

# include <string.h>

/*
**		Structures
*/

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_mprintf
{
	int				pad;
	int				indent;
	int				width;
	int				neg;
	int				diff;
	int				space;
}					t_mprintf;

/*
**		Fonctions
*/

int					ft_atoi(const char *s);
void				ft_bzero(void *s, size_t n);
void				ft_free_tab(char ***tab);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isspace(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstfind(t_list *lst, void *content_ref, int (*cmp)());
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
int					ft_lstlen(t_list *lst);
void				ft_lstrev(t_list **alst);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstmerge(t_list **alst1, t_list *alst2);
t_list				*ft_lstnew(const void *content, size_t content_size);
void				ft_lstpushback(t_list **begin_list, t_list *new);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *s, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *s, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *s, size_t len);
void				*ft_memset(void *s, int c, size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putendl(const char *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int nb);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putstr(const char *s);
char				*ft_strcat(char *dst, const char *s);
char				*ft_strchr(const char *s, int c);
size_t				ft_strclen(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *s);
char				*ft_strdup(const char *s);
void				ft_strdel(char **as);
int					ft_strequ(const char *s1, const char *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strjoinf(char *s1, char *s2, int vars);
size_t				ft_strlcat(char *dst, const char *s, size_t len);
size_t				ft_strlen(const char *s);
char				*ft_strncat(char *dst, const char *s, size_t n);
int					ft_strnrchr(const char *s, char c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *s, size_t n);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s, const char *ndl, size_t len);
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_strrchr(const char *s, int c);
char				*ft_strrev(char *s);
char				**ft_strsplit(const char *s, char c);
char				*ft_strstr(const char *s, const char *ndl);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strtrim(const char *s);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					get_next_line(const int fd, char **line);
void				ft_mprintf(int fd, const char *str, ...);
int					buff_fill_int(int arg, char *buff, t_mprintf *s_mpf);
int					buff_fill_char(int arg, char *buff, t_mprintf *s_mpf);
int					buff_fill_str(char *arg, char *buff, t_mprintf *s_mpf);

#endif
