/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 21:06:11 by smaeda            #+#    #+#             */
/*   Updated: 2024/12/31 17:19:50 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		flag;
	long long	result;

	result = 0;
	if (*str == '\0')
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	flag = (*str == '-') * -2 + 1;
	str += (*str == '-' || *str == '+');
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
		if (ft_isdigit(*str) && flag == 1 && ((LONG_MAX - (*str - '0'))
				/ 10 < result || result * 10 >= LONG_MAX))
			return ((int)LONG_MAX);
		if (ft_isdigit(*str) && flag == -1 && ((LONG_MIN + (*str - '0'))
				/ 10 > -result || result * 10 < LONG_MIN))
			return ((int)LONG_MIN);
	}
	return (flag * (int)result);
}
