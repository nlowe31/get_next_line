/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:59:36 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/16 17:24:06 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' && (ft_isdigit(*(str + 1))))
		str++;
	if (*str == '-' && (ft_isdigit(*(str + 1))))
	{
		sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = (result * 10) + (*str - 48);
		str++;
	}
	return (sign * result);
}
