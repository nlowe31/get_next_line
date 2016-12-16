/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 22:48:56 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/16 17:18:27 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);

	printf("Mine: %i\nTheirs: %i\n", ft_atoi(av[1]), atoi(av[1]));
	return (0);
}
