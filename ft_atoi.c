/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 21:06:11 by smaeda            #+#    #+#             */
/*   Updated: 2024/12/22 18:57:20 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	flag;
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
		result = result * 10 + (*str -'0');
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
/*
int	main(void)
{
	char	str91[] = "-a-5";
	char	str92[] = "-100";
	char	str93[] = "1000321";
	char	str94[] = "2147483648";
	char	str95[] = "-2147483649";
	char	str96[] = "100ab100";
	char	str97[] = "\0";
	char	str98[] = "111.11";
	char	str99[] = "-2147483648";
	char	str99_1[] = "2147483647";

	printf("zisaku  : %d\n", ft_atoi(str91));
	printf("library : %d\n", atoi(str91));
	printf("zisaku  : %d\n", ft_atoi(str92));
	printf("library : %d\n", atoi(str92));
	printf("zisaku  : %d\n", ft_atoi(str93));
	printf("library : %d\n", atoi(str93));
	printf("zisaku  : %d\n", ft_atoi(str94));
	printf("library : %d\n", atoi(str94));
	printf("zisaku  : %d\n", ft_atoi(str95));
	printf("library : %d\n", atoi(str95));
	printf("zisaku  : %d\n", ft_atoi(str96));
	printf("library : %d\n", atoi(str96));
	printf("zisaku  : %d\n", ft_atoi(str97));
	printf("library : %d\n", atoi(str97));
	printf("zisaku  : %d\n", ft_atoi(str98));
	printf("library : %d\n", atoi(str98));
	printf("zisaku  : %d\n", ft_atoi(str99));
	printf("library : %d\n", atoi(str99));
	printf("zisaku  : %d\n", ft_atoi(str99_1));
	printf("library : %d\n", atoi(str99_1));
	char str99_2[] ="999999999";
	printf("zisaku  : %d\n", ft_atoi(str99_2));
	printf("library : %d\n", atoi(str99_2));
}
*/
