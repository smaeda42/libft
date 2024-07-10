/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:23:53 by smaeda            #+#    #+#             */
/*   Updated: 2024/06/30 20:42:37 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (*s1 == c1)
			return ((void *)s1);
		n--;
		s1++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str1[] ="nesugosita!!!";
	char str2[] ="nesugosita!!!";
	printf("ft_memchr  : %s\n", ft_memchr(str51, 103, 15));
	printf("memchr : %s\n", memchr(str52, 103, 15));
}
*/
