/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:43:02 by nlowe             #+#    #+#             */
/*   Updated: 2017/01/31 18:28:12 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strsep(char **str, const char c)
{
	char	*temp;

	if (!c || !str || !(*str) || !(**str))
		return (NULL);
	temp = *str;
	while (**str && **str != c)
		(*str)++;
	if (**str == c)
	{
		**str = '\0';
		(*str)++;
		return (temp);
	}
	str = NULL;
	return (temp);
}

int		main(int ac, char **av)
{
	char	*test;
	char	c;

	if (ac != 3)
		return (0);
	test = ft_strdup(av[1]);
	c = av[2][0];
	ft_putnbr(ft_strcmp("\0", ft_strsep(&test, c)));
		// ft_putendl("null!");
	ft_putendl(test);
	return (0);
}
