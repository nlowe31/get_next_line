/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:16:12 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/12 17:19:18 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strnstr(const char *big, const char *little, size_t len)
{
	int		i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (len && *big)
	{
		if (*big == little[i])
			i++;
		else if (little[i] == '\0')
			return ((char *)big);
		else
			i = 0;
		len--;
		big++;
	}
	return (NULL);
}
