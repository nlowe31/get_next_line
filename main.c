/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:23:01 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/10 12:34:58 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_strlen(const char *str);

int		main(int ac, char **av)
{
	char	*src;
	char	*dst;

	if (ac != 2)
		return (0);
	src = av[1];
	dst = NULL;
	ft_memcpy(dst, src, ft_strlen(av[1]));
	printf("%s\n", dst);
}
