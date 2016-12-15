/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:12:15 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/15 22:38:43 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	printf("Mine: %i\n", ft_memcmp(av[1], av[2], atoi(av[3])));
	printf("Machine: %i\n", memcmp(av[1], av[2], atoi(av[3])));
	return (0);
}
