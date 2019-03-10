/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 22:06:34 by kmira             #+#    #+#             */
/*   Updated: 2019/02/17 22:58:21 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_sign(int c, int *sign)
{
	if (c == '+')
	{
		*sign = 1;
		return (1);
	}
	if (c == '-')
	{
		*sign = -1;
		return (1);
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	int sign;
	int result;

	result = 0;
	sign = 1;
	while (ft_is_whitespace(*str))
		str++;
	if (is_sign(*str, &sign))
		str++;
	while (ft_isdigit(*str))
	{
		result = result * 10;
		result = result + (*str - '0');
		str++;
	}
	return (result * sign);
}
