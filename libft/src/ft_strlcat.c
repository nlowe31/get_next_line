/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 23:39:27 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/18 22:10:59 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	source_len;

	i = 0;
	dest_len = 0;
	source_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[source_len] != '\0')
		source_len++;
	while (src[i] != '\0' && (i + dest_len) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (size > dest_len)
		dest[dest_len + i] = '\0';
	if (size <= dest_len)
		return (source_len + size);
	else
		return (dest_len + source_len);
}
