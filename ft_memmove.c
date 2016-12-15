/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:56:15 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/15 21:53:05 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ret;

	ret = ft_memalloc(len + 1);
	ft_memcpy(ret, dst, len);
	ft_memcpy(dst, src, len);
	return (dst);
}
