/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:35:11 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/17 17:11:15 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int		main(int ac, char **av)
{
	char	*test;

	if (ac != 3)
		return (0);
	test = ft_strjoin(av[1], av[2]);
	printf("%s\n", test);
	return (0);
}
