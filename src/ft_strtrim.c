/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 15:47:10 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/19 11:58:52 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	start_space(char const *s)
{
	size_t	len;

	len = 0;
	while (*s && ft_isspace(*s++))
		len++;
	return (len);
}

static size_t	end_space(char const *s)
{
	size_t	len;

	len = 0;
	while (*s)
		s++;
	s--;
	while (*s && ft_isspace(*s--))
		len++;
	return (len);
}

char			*ft_strtrim(char const *s)
{
	char	*ret;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s) - (start_space(s) + end_space(s));
	if (ft_strlen(s) == start_space(s))
		ret = ft_strdup("");
	else
		ret = ft_strndup((s + start_space(s)), len);
	return (ret);
}
