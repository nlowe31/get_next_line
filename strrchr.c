/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:52:38 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/12 17:01:41 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*strchr(const char *s, int c)
{
	while (*s != (char)c && *s != '\0')
		s++;
	if (*s == (char)c)
		return (s);
	else
		return (NULL);
}

char		*strrchr(const char *s, int c)
{
	if (strrchr(*s, c) == NULL)
		return (NULL);
	while (*s)
		s++;
	while (*s != (char)c)
		s--;
	return (s);
}
