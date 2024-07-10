/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:42:58 by smaeda            #+#    #+#             */
/*   Updated: 2024/06/30 21:45:18 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
		printf("zisaku  : %d\n", ft_memcmp("aiueo", "aiue1", 5));
		printf("library : %d\n", memcmp("aiueo", "aiue1", 5));
		printf("zisaku  : %d\n", ft_memcmp("aiueo", "aiueo", 5));
		printf("library : %d\n", memcmp("aiueo", "aiueo", 5));
		printf("zisaku  : %d\n", ft_memcmp("aiueo", "1iueo", 5));
		printf("library : %d\n", memcmp("aiueo", "1iueo", 5));
		printf("zisaku  : %d\n", ft_memcmp("aiueo", "1iueo", 0));
		printf("library : %d\n", memcmp("aiueo", "1iueo", 0));
		printf("zisaku  : %d\n", ft_memcmp("", "", 0));
		printf("library : %d\n", memcmp("", "", 0));
}
*/
