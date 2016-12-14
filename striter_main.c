/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striter_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 22:17:58 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/13 23:15:01 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_striter(char *s, void (*f)(char *));

void	ft_toupper(char *c)
{
	if ((*c) >= 'a' && (*c) <= 'z')
		*c = (*c) - 32;
}

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
	ft_striter(test, ft_toupper);
	printf("%s\n", test);
	ft_memdel(&test);
	printf("%s\n", test);
	return (0);
}
