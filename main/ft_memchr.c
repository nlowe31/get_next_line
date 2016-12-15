/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:35:11 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/15 21:52:39 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	printf("Mine: %s\n", ft_memchr(av[1], av[2][0], atoi(av[3])));
	printf("Machine: %s\n", memchr(av[1], av[2][0], atoi(av[3])));
	return (0);
}
