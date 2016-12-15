/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 22:32:35 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/15 21:55:47 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memchr(const void *s, int c, size_t n);
int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(char **ap);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
void	ft_striter(char *s, void (*f)(char *));
int		ft_strlen(const char *str);
char	*ft_strnew(size_t size);
int		tolower(int c);
int		toupper(int c);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(char *str1, char *str2);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
char	*strnstr(const char *big, const char *little, size_t len);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
