/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:43:02 by nlowe             #+#    #+#             */
/*   Updated: 2017/01/26 17:46:07 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int ac, char **av)
{
	char	*str;
	int		fd;

	if ((fd = open(av[1], O_RDONLY) <= 0))
		return (0);
	ft_putnbr(get_next_line(fd, &str));
	ft_putstr(str);
	return (0);
}
