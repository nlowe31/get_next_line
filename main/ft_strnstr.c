/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 22:48:56 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/16 15:56:55 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	char	*mine;
	char	*comp;

	if (ac != 4)
		return (0);

	mine = ft_strnstr(av[1], av[2], atoi(av[3]));
	comp = strnstr(av[1], av[2], atoi(av[3]));

	printf("Mine: %s\nTheirs: %s\n", mine, comp);
	return (0);
}
