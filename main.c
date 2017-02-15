/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 19:59:56 by nlowe             #+#    #+#             */
/*   Updated: 2017/02/15 16:51:54 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(void)
{
	char	*filename;
	char	*line;
	int		fd;
	int		ret;
	int		run;

	run = 1;
	while (run)
	{
		ft_putstr("enter filename: ");
		run = get_next_line(0, &filename);
		ret = 1;
		fd = open(filename, O_RDONLY);
		while (ret > 0)
		{
			ret = get_next_line(fd, &line);
			printf("%i: %s\n", ret, line);
			free(line);
		}
		ft_putchar('\n');
		close(fd);
	}
	return (0);
}
