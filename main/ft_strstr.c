/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 22:48:56 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/16 15:25:03 by nlowe            ###   ########.fr       */
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

	mine = ft_strstr(av[1], av[2]);
	comp = strstr(av[1], av[2]);

	printf("Mine: %s\nTheirs: %s\n", mine, comp);
	return (0);
}
