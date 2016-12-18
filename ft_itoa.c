/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 15:47:10 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/19 00:11:18 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t		len;

	len = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while ((n /= 10) > 0)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	size_t	len;
	char	*ret;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numlen(n);
	if (!(ret = ft_strnew(len)))
		return (NULL);
	if (n < 0)
	{
		ret[0] = '-';
		n *= -1;
	}
	else
		ret[0] = '0';
	while (n > 0)
	{
		ret[--len] = '0' + (n % 10);
		n /= 10;
	}
	return (ret);
}
