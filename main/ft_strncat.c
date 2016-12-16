/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 22:48:56 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/16 17:56:00 by nlowe            ###   ########.fr       */
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
	mine = ft_strnew(ft_strlen(av[1]) + ft_strlen(av[2]) + 2);
	comp = ft_strnew(ft_strlen(av[1]) + ft_strlen(av[2]) + 2);
	mine = ft_strcpy(mine, av[1]);
	comp = strcpy(comp, av[1]);
	mine = ft_strncat(mine, av[2], 4);
	comp = strncat(comp, av[2], 4);

	printf("Mine: %s\nTheirs: %s\n", mine, comp);
	ft_strdel(&mine);
	return (0);
}
