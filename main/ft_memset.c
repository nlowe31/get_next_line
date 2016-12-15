/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:12:15 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/15 18:33:31 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../libft.h"

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%s\n", av[1]);
	ft_memset(av[1], '1', 1));
	printf("%s\n", av[1]);
	return (0);
}
