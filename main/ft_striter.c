/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 22:17:58 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/16 18:10:59 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int		main(int ac, char **av)
{
	char	*test;

	if (ac != 2)
		return (0);
	printf("Calling strnew...\n");
	test = ft_strnew(ft_strlen(av[1]));
	printf("Calling strcpy...\n");
	ft_strcpy(test, av[1]);
	printf("%s\n", test);
	printf("Calling striter...\n");
	ft_striter(test, ft_putstr);
	printf("%s\n", test);
	ft_strdel(&test);
	printf("%s\n", test);
	return (0);
}
