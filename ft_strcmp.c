/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 17:52:04 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/16 17:01:00 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (str1 == NULL && str2 == NULL)
		return (0);
	while (*str1 == *str2)
	{
		if (*str1 == '\0' && *str2 == '\0')
			return (0);
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
