/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:38:38 by nlowe             #+#    #+#             */
/*   Updated: 2017/01/30 16:56:28 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_file	*new_file(int fd)
{
	t_file	*file;

	if (!(file = (t_file *)malloc(sizeof(t_file))))
		return (NULL);
	file->next = NULL;
	file->fd = fd;
	file->extra = NULL;
	return (file);
}

t_file	*add_file(t_file **list, int fd)
{
	t_file	*temp;

	temp = (*list);
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_file(fd);
		return (temp->next);
	}
	(*list) = new_file(fd);
	return (*list);
}

int		read_file(t_file *file, char ** ptr)
{
	char	buff[BUFF_SIZE + 1];
	char	*line;
	int		ret;

	ft_strclr(buff);
	ret = 1;
	line = NULL;
	if (file->extra/* && ft_strchr(file->extra, '\n')*/)
	{
		// ft_putendl("found extra");
		// ft_putstr("strfchr: ");
		// ft_putendl(ft_strfchr(file->extra, '\n'));
		// ft_putstr("strdup: ");
		// ft_putendl(ft_strdup(ft_strchr(file->extra, '\n')));
		if (!(line = ft_strfchr(file->extra + 1, '\n')) ||
			!(file->extra = ft_strdup(ft_strchr(file->extra, '\n'))))
			return (-1);
		(*ptr) = line;
		return (1);
	}
	while (!(ft_strchr(buff, '\n')) && ret)
	{
		if ((ret = read(file->fd, buff, BUFF_SIZE)) < 0)
			return (-1);
		buff[ret] = '\0';
		if (!(line = ft_strjoin(line, buff)))
			return (-1);
		// ft_putendl(line);
	}
	if (!(file->extra = ft_strdup(ft_strchr(line, '\n'))) ||
		!((line = ft_strfchr(line, '\n'))))
		return (-1);
	// ft_putendl(line);
	(*ptr) = line;
	if (ret == 0)
		return (0);
	return (1);
}

int		get_next_line(int const fd, char ** line)
{
	static t_file	*list = NULL;
	t_file			*temp;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	temp = list;
	while (temp)
	{
		if (temp->fd == fd)
			return (read_file(temp, line));
		temp = temp->next;
	}
	return (read_file(add_file(&list, fd), line));
}
