/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 19:59:56 by nlowe             #+#    #+#             */
/*   Updated: 2017/02/07 10:49:21 by nlowe            ###   ########.fr       */
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

	while (get_next_line(0, &filename))
	{
		ret = 1;
		fd = open(filename, O_RDONLY);
		while (ret > 0)
		{
			ret = get_next_line(fd, &line);
			ft_putnbr(ret);
			ft_putstr(": ");
			ft_putendl(line);
			ft_strclr(line);
		}
		close(fd);
	}
	return (0);
}
