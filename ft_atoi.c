/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:59:36 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/13 22:39:25 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		result;
	int		i;
	int		pos_neg;

	i = 0;
	result = 0;
	pos_neg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '+' && (str[i + 1] >= 48 && str[i + 1] <= 57))
		i++;
	if (str[i] == '-' && (str[i + 1] >= 48 && str[i + 1] <= 57))
	{
		pos_neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * pos_neg);
}
