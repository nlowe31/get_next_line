/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 22:48:56 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/17 20:01:06 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	char	*test;

	if (ac != 2)
		return (0);
	test = ft_itoa(atoi(av[1]));
	ft_putstr(test);
	return (0);
}
