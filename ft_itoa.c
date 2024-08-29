/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:12:47 by smaeda            #+#    #+#             */
/*   Updated: 2024/08/27 21:02:15 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_num(long num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		count++;
		num = -num;
	}
	if (num == 0)
		count++;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

static char	*pre_conv(int len)
{
	char	*tmp;

	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*result;
	long	num;

	num = n;
	len = len_num(num);
	result = pre_conv(len);
	if (!result)
		return (NULL);
	if (num < 0)
		num = -num;
	i = len - 1;
	while (num != 0)
	{
		result[i] = ((num % 10) + '0');
		num = num / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = 0;
	return (result);
}
