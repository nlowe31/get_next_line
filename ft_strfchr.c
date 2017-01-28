/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:52:38 by nlowe             #+#    #+#             */
/*   Updated: 2017/01/28 17:29:11 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfchr(const char *s, int c)
{
	size_t	len;

	len = 0;
	if (ft_strchr(s, c) == NULL)
		return (NULL);
	while (s[len] != (char)c)
		len++;
	return (ft_strndup(s, len));
}
