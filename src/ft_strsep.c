/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:52:38 by nlowe             #+#    #+#             */
/*   Updated: 2017/01/31 16:06:42 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsep(char **str, const char c)
{
	char	*temp;

	if (!c || !str || !*str)
		return (NULL);
	temp = *str;
	while (**str && **str != c)
		(*str)++;
	if (**str == c)
	{
		**str = '\0';
		(*str)++;
		return (temp);
	}
	str = NULL;
	return (temp);
}
