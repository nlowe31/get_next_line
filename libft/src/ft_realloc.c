/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 22:07:10 by nlowe             #+#    #+#             */
/*   Updated: 2017/02/02 15:37:33 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_realloc(void *ptr, size_t size)
{
	void	*ret;

	if (size == 0 && ptr)
	{
		if (!(ret = (void *)malloc(1)))
			return (NULL);
		ft_memdel(&ptr);
		return (ret);
	}
	if (!(ret = (void *)malloc(size)))
		return (NULL);
	if (ptr)
	{
		ft_memcpy(ret, ptr, size);
		ft_memdel(&ptr);
	}
	return (ret);
}
