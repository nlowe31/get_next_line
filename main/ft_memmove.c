/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:56:50 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/15 21:41:06 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac != 5)
		return (0);
	printf("1: %s\n2: %s\n", av[1], av[2]);
	if (av[3][0] == 'm')
		ft_putstr(ft_memmove(av[1], av[2], atoi(av[4])));
	else if (av[3][0] == 'c')
		ft_putstr(memmove(av[1], av[2], atoi(av[4])));
	ft_putchar('\n');
	printf("1: %s\n2: %s\n", av[1], av[2]);
	return (0);
}
