/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:43:02 by nlowe             #+#    #+#             */
/*   Updated: 2017/01/31 18:46:51 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*line1;
	char	*line2;
	int		fd1;
	int		fd2;

	line1 = NULL;
	line2 = NULL;
	if (ac != 3)
		return (0);
	if ((fd1 = open(av[1], O_RDONLY)) <= 0)
		fd1 = 0;
	if ((fd2 = open(av[2], O_RDONLY)) <= 0)
		fd2 = 0;
	while (get_next_line(fd1, &line1))
	{
		ft_putendl(line1);
	}
	ft_putendl(line1);
	ft_putnbr(get_next_line(fd1, &line1));
	ft_putchar('\n');
	close(fd1);
	ft_putnbr(get_next_line(fd1, &line1));
	return (0);
}
