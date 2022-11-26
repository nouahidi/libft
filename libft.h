/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:21:56 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/15 11:31:07 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

typedef struct s_var
{
	int	i;
	int	j;
	int	k;
}		t_var;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_atoi(const char *str);
void	*ft_memset(void *pntr, int c, size_t n);
void	ft_bzero(void	*s, size_t	n);
void	*ft_calloc(size_t m, size_t x);
int		ft_isalnum(int aln);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit( int arg );
int		ft_isprint( int arg );
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *pnt1, const void *pnt2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove( void	*dest, const	void	*src, size_t	n);
char	*ft_strchr(const char *str, int s);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *big, const	char *lit, size_t len);
char	*ft_substr(char const *s, unsigned int st, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strrchr(const char *str, int s);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *str, int fd);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
char	*ft_strdup(const char *str);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list	*lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif