/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 12:57:13 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/19 18:27:50 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;

	if (!(ret = (t_list *)malloc(sizeof(*ret))))
		return (NULL);
	ret->next = NULL;
	if (content == NULL || content_size == 0)
	{
		ret->content = NULL;
		ret->content_size = 0;
		return (ret);
	}
	if (!(ret->content = malloc(content_size)))
		return (NULL);
	ft_memcpy(ret->content, content, content_size);
	ret->content_size = content_size;
	return (ret);
}
