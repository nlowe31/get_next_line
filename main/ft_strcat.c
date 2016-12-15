/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 22:48:56 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/15 23:23:46 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*mine;
	char	*comp;

	if (ac != 3)
		return (0);
	mine = ft_memalloc(ft_strlen(av[1]) + ft_strlen(av[2]) + 2);
	comp = ft_memalloc(ft_strlen(av[1]) + ft_strlen(av[2]) + 2);
	mine = ft_strcpy(mine, av[1]);
	comp = strcpy(comp, av[1]);
	mine = ft_strcat(mine, av[2]);
	comp = strcat(comp, av[2]);

	printf("Mine: %s\nTheirs: %s\n", mine, comp);
	return (0);
}
