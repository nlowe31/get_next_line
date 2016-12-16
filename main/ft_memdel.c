/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 18:12:15 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/16 17:57:38 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../libft.h"

int		main(void)
{
	char	**test;
	char	*contents;

	contents = malloc(4);
	test = malloc(10);
	test = &contents;

	ft_strdel(test);

	return (0);
}
