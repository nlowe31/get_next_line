/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:16:12 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/18 22:50:59 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	if (*big == '\0')
		return (NULL);
	while (len > 0 && *big)
	{
		if (*big == little[i])
		{
			while (big[i] && little[i] && (len - i) > 0 && big[i] == little[i])
				i++;
			if (little[i] == '\0')
				return ((char *)big);
		}
		i = 0;
		big++;
		len--;
	}
	return (NULL);
}
