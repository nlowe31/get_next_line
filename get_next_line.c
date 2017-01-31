/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:38:38 by nlowe             #+#    #+#             */
/*   Updated: 2017/01/31 19:13:41 by nlowe            ###   ########.fr       */
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

char	*ft_clean_strjoin(char *s1, char *s2)
{
	char	*ret;

	if (!(s1) && !(s2))
		return (NULL);
	if (!(s1))
		return (s2);
	if (!(s2))
		return (s1);
	if (!(ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ret = ft_strcpy(ret, s1);
	ret = ft_strcat(ret, s2);
	free(&s1);
	return (ret);
}

int		read_file(t_file *file, char **ptr)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;
	char	*temp;

	ret = 1;
	if (!(temp = ft_strnew(1)))
		return (-1);
	ft_strclr(buff);
	while (!(ft_strchr(buff, '\n')) && ret)
	{
		if ((ret = read(file->fd, buff, BUFF_SIZE)) < 0)
			return (-1);
		buff[ret] = '\0';
		temp = file->extra;
		if (!(file->extra = ft_strjoin(file->extra, buff)))
			return (-1);
		ft_strdel(&temp);
	}
	(*ptr) = ft_strsep(&(file->extra), '\n');
	if (ret == 0 && ft_strlen(*ptr) == 0 && ft_strlen(file->extra) == 0)
		return (0);
	return (1);
}

int		get_next_line(int const fd, char **line)
{
	static t_file	*list = NULL;
	t_file			*temp;

	if (fd < 0 || fd == 1 || !line || BUFF_SIZE < 1)
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
