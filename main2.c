/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:43:02 by nlowe             #+#    #+#             */
/*   Updated: 2017/02/02 15:00:53 by nlowe            ###   ########.fr       */
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
	int		i;

	i = 0;
	line1 = NULL;
	line2 = NULL;
	if (ac != 3)
		return (0);
	if ((fd1 = open(av[1], O_RDONLY)) <= 0)
		fd1 = 0;
	if ((fd2 = open(av[2], O_RDONLY)) <= 0)
		fd2 = 0;
	while (i < 10)
	{
		if (i % 2 == 0)
		{
			get_next_line(fd1, &line1);
			ft_putendl(line1);
		}
		else
		{
			get_next_line(fd2, &line2);
			ft_putendl(line2);
		}
		i++;
	}
	close(fd1);
	close(fd2);
	return (0);
}
