/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 16:56:39 by nlowe             #+#    #+#             */
/*   Updated: 2017/02/15 18:14:18 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	*test;
	char	*copy;
	char	*result;
	char	c;

	c = '\n';
	test = "This is a test\n\n";
	copy = ft_strdup(test);
	while (ft_strlen(copy) > 0)
	{
		result = ft_strsep(&copy, c);
		printf("result(%zu): %s\n---\ntest(%zu): %s\n===\n", ft_strlen(result), result, ft_strlen(copy), copy);
	}
	result = ft_strsep(&copy, c);
	printf("result(%zu): %s\n---\ntest(%zu): %s\n===\n", ft_strlen(result), result, ft_strlen(copy), copy);
	result = ft_strsep(&copy, c);
	printf("result(%zu): %s\n---\ntest(%zu): %s\n===\n", ft_strlen(result), result, ft_strlen(copy), copy);
	return (0);
}
