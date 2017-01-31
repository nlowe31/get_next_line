/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:52:38 by nlowe             #+#    #+#             */
/*   Updated: 2017/01/31 15:56:06 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsep(char **str, const char c)
{
	char	*temp;

	temp = *str;
	while (**str && **str != c)
		(*str)++;
	if (**str == c)
	{
		**str = '\0';
		(*str)++;
		return (temp);
	}
	else
	{
		str = NULL;
		return (temp);
	}
}
