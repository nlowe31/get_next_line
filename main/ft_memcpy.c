/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:35:11 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/15 18:42:19 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("1: %s\n2: %s\n", av[1], av[2]);
	printf("%s\n", ft_memcpy(av[1], av[2], 3));
	printf("1: %s\n2: %s\n", av[1], av[2]);
	return (0);
}
