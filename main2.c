/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 19:59:56 by nlowe             #+#    #+#             */
/*   Updated: 2017/02/15 19:12:43 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*line;
	int		fd;
	int		ret;
	int		i;

	i = 1;
	while (i < ac)
	{
		ret = 1;
		fd = open(av[i], O_RDONLY);
		while (ret > 0)
		{
			ret = get_next_line(fd, &line);
			printf("%i: %s\n", ret, line);
		//	free(line);
		}
		printf("\n ===\n|EOF|\n ===\n");
		close(fd);
		i++;
	}
	return (0);
}
