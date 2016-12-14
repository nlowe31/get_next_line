/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:19:53 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/12 17:27:18 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

const int	ft_strlen(const char *str)
{
	if (*str)
		return (1 + ft_strlen(str + 1));
	return (0);
}

char		*strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	if (!(s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (*s1)
	{
		s2[i] = *s1;
		s1++;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
