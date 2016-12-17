/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 15:47:10 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/17 20:53:21 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_charjoin(char const *s1, char c)
{
	char	*ret;

	if (!(ret = ft_strnew(ft_strlen(s1) + 1)))
		return (NULL);
	ret = ft_strcpy(ret, s1);
	while (*ret)
		ret++;
	*ret = c;
	return (ret);
}
//
// char			*ft_itoa(int n)
// {
// 	char			*ret;
// 	unsigned int	num;
//
// 	ret = ft_strnew(1);
// 	if (n < 0)
// 		ret = ft_charjoin(ret, '-');
// 	num = (unsigned int)n;
// 	while (num > 0)
// 	{
// 		ret = ft_charjoin(ret, ('0' + (num % 10)));
// 		num = num / 10;
// 	}
// 	return (ret);
// }
//
char			*ft_itoa(int n)
{
	char			*ret;

	ret = ft_strnew(1);
	 if (n == 0)
	 	return ("\0");
	if (n < 0)
	{
		ret[0] = '-';
		n *= -1;
	}
	else
		ret[0] = '0' + (n % 10);
	return (ft_strjoin(ft_itoa(n / 10), ret));
}
//
// static size_t	ft_numlen(int n)
// {
// 	size_t	len;
//
// 	len = 0;
// 	if (n < 0)
// 	{
// 		len++;
// 		n *= -1;
// 	}
// 	while (n > 0)
// 	{
// 		len++;
// 		n /= 10;
// 	}
// 	return (len);
// }
//
// char			*ft_itoa(int n)
// {
// 	char		*ret;
// 	size_t		len;
// 	size_t		i;
//
// 	i = 0;
// 	len = ft_numlen(n);
// 	ret = ft_strnew(len);
// 	if (n < 0)
// 	{
// 		ret[i++] = '-';
// 		n *= -1;
// 	}
// 	while (i < len)
// 	{
// 		ret[i] = '0' + (n % 10);
// 		n /= 10;
// 		i++;
// 	}
// 	return (ret);
// }
