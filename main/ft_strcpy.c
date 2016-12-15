/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 22:48:56 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/15 23:00:38 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*mine;
	char	*comp;

	if (ac != 2)
		return (0);
	mine = ft_memalloc(ft_strlen(av[1]) + 1);
	comp = ft_memalloc(ft_strlen(av[1]) + 1);
	mine = ft_strcpy(mine, av[1]);
	comp = strcpy(comp, av[1]);

	printf("Length: %i\n", ft_strlen(av[1]));
	printf("Mine: %s\nTheirs: %s\n", mine, comp);
	return (0);
}
