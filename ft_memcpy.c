/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:16:06 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/14 15:12:46 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	*d = *s;
	return (dst);
}

int		main(int ac, char **av)
{
	char	*test1;
	char	*test2;

	test1 = ft_newstr(4);
	test2 = ft_newstr(3);

	printf("1: %s\n2: %s\n", test1, test2);
	memcpy(test1, av[1], 3);
	printf("\n1: %s\n2: %s\n", test1, test2);
	return (0);
}
