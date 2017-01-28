/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:38:38 by nlowe             #+#    #+#             */
/*   Updated: 2017/01/28 18:46:36 by nlowe            ###   ########.fr       */
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

int		read_file(t_file *file, char ** ptr)
{
	char	buff[BUFF_SIZE + 1];
	char	*line;
	int		ret;

	if (file->extra && ft_strchr(file->extra, '\n'))
	{
		if (!(*ptr = ft_strfchr(file->extra, '\n')) ||
			!(file->extra = ft_strdup(ft_strchr(file->extra, '\n'))))
			return (-1);
		return (1);
	}
	while (!(ft_strchr(buff, '\n')) && ret)
	{
		if ((ret = read(file->fd, buff, BUFF_SIZE)) < 0)
			return (-1);
		buff[ret] = '\0';
		if (!(line = ft_strjoin(line, buff)))
			return (-1);
	}
	if (!(*ptr = ft_strjoin(line, ft_strfchr(buff, '\n'))) ||
		!(file->extra = ft_strdup(ft_strchr(buff, '\n'))))
		return (-1);
	if (ret == 0)
		return (0);
	return (1);
}

int		get_next_line(int const fd, char ** line)
{
	static t_file	*list = NULL;
	t_file			*temp;

	if (fd < 0 || !line)
		return (-1);
	temp = list;
	while (temp)
	{
		if (temp->fd == fd)
			return (read_file(temp, line));
		temp = temp->next;
	}
	if(!(temp = new_file(fd)))
		return (-1);
	return (read_file(temp, line));
}
