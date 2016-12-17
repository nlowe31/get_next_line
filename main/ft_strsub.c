/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:35:11 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/17 17:01:57 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int		main(int ac, char **av)
{
	char	*test;

	if (ac != 4)
		return (0);
	printf("1: %s\n", av[1]);
	test = ft_strsub(av[1], atoi(av[2]), atoi(av[3]));
	printf("2: %s\n", test);
	return (0);
}
