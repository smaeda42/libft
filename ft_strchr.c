/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:24:47 by smaeda            #+#    #+#             */
/*   Updated: 2024/09/01 19:40:43 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c1;
	char	*s1;

	c1 = (char)c;
	s1 = (char *)s;
	while (*s1)
	{
		if (*s1 == c1)
			return (s1);
		s1++;
	}
	if (c1 == '\0')
		return (s1);
	return (NULL);
}

/*
int	main(void)
{
	const char	*str1 = "Hello, world!";
	char		*result1;
	char		*expected1;

	result1 = ft_strchr(str1, 'o');
	expected1 = strchr(str1, 'o');
	printf("Test 1 - Expected: %s, Got: %s\n", expected1, result1);
}
*/
