/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:52:38 by nlowe             #+#    #+#             */
/*   Updated: 2017/01/30 17:47:59 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfchr(const char *s, int c)
{
	size_t	len;

	len = 0;
	if (!(s) || !(c))
		return (NULL);
	if (ft_strchr(s, c) == NULL)
		return (ft_strdup(s));
	while (s[len] && s[len] != (char)c)
		len++;
	return (ft_strndup(s, len));
}
