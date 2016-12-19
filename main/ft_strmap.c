/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 22:17:58 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/19 14:45:30 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int		main(int ac, char **av)
{
	char	*product;

	if (ac != 2)
		return (0);
	product = ft_strmap(av[1], ft_toupper);
	printf("%s\n", product);
	return (0);
}
