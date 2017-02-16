/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:38:38 by nlowe             #+#    #+#             */
/*   Updated: 2017/02/16 21:45:14 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

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

int		add_file(t_file **list, int fd)
{
	t_file	*temp;

	if (!(temp = new_file(fd)))
		return (-1);
	temp->next = (*list);
	(*list) = temp;
	return (1);
}

int		read_file(t_file *file, char **ptr)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;
	char	*temp;

	ret = 1;
	ft_bzero(buff, BUFF_SIZE + 1);
	if (!(file->extra = ft_strdup(file->extra)))
		if (!(file->extra = ft_strnew(0)))
			return (-1);
	while (!(ft_strchr(file->extra, '\n')) && ret)
	{
		if ((ret = read(file->fd, buff, BUFF_SIZE)) < 0)
			return (-1);
		buff[ret] = '\0';
		temp = file->extra;
		if (!(file->extra = ft_strjoin(file->extra, buff)))
			return (-1);
		free(temp);
	}
	if (!(*ptr = ft_strsep(&(file->extra), '\n'))
		&& ft_strlen(file->extra) == 0 && ret == 0)
		return (0);
	return (1);
}

int		get_next_line(int const fd, char **line)
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
	if (add_file(&list, fd) < 0)
		return (-1);
	return (read_file(list, line));
}
