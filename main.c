/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:43:02 by nlowe             #+#    #+#             */
/*   Updated: 2017/01/31 17:12:14 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(void)
{
	char	*str;
	int		fd[3];
	char	*filename1 = "test.txt";
	char	*filename2 = "test1.txt";
	char	*filename3 = "test2.txt";

	if ((fd[0] = open(filename1, O_RDONLY)) <= 0)
		return (0);
	if ((fd[1] = open(filename2, O_RDONLY)) <= 0)
		return (0);
	if ((fd[2] = open(filename3, O_RDONLY)) <= 0)
		return (0);

	ft_putnbr(fd[0]);
	ft_putchar(':');
	ft_putnbr(get_next_line(fd[0], &str));
	ft_putchar(':');
	ft_putendl(str);
	ft_putnbr(0);
	ft_putchar(':');
	ft_putnbr(get_next_line(0, &str));
	ft_putchar(':');
	ft_putendl(str);
	ft_putnbr(fd[2]);
	ft_putchar(':');
	ft_putnbr(get_next_line(fd[2], &str));
	ft_putchar(':');
	ft_putendl(str);
	ft_putnbr(fd[0]);
	ft_putchar(':');
	ft_putnbr(get_next_line(fd[0], &str));
	ft_putchar(':');
	ft_putendl(str);
	ft_putnbr(fd[1]);
	ft_putchar(':');
	ft_putnbr(get_next_line(fd[1], &str));
	ft_putchar(':');
	ft_putendl(str);

	return (0);
}
